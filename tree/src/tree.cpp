#include <tree.hpp>
#include <iostream>
#include <cassert>

Tree::Tree(int value)
{
        node* temp = new node;
        temp -> value = value;
        temp -> left = NULL;
        temp -> right = NULL;
        temp -> parent = NULL;
        root = temp;
}

Tree::Tree()
{
        root = NULL;
}

node* Tree::new_node(int value)
{
        node* n = new node;
        n -> value = value;
        n -> left = NULL;
        n -> right = NULL;
        n -> parent = root;
        return n;
}

void Tree::insert(int value)
{
        node* temp = new_node(value);
        if ( !root ) {
                root = temp;
        } else {
                node* current = root;
                node* parent_node = root;
                if ( temp -> value < current -> value) {
                        current = current -> left;
                } else {
                        current = current -> right;
                }
                while (current) {
                        parent_node = current;
                        if ( temp -> value < current -> value) {
                                current = current -> left;
                        } else {
                                current = current -> right;
                        }
                }
                if ( temp -> value < parent_node -> value ) {
                        parent_node -> left = temp;
                        temp -> parent = parent_node;
                } else {
                        parent_node -> right = temp;
                        temp -> parent = parent_node;
                }
        }
}

void Tree::inorder_print(node* root)
{
        if ( root ) {
                inorder_print ( root -> left );
                std::cout << root -> value;
                std::cout << ", ";
                inorder_print ( root -> right );
        }
}



int Tree::max () 
{
        if ( root ) {
                node* temp = root;
                while (temp -> right) {
                        temp = temp -> right;
                }
                return temp -> value;
        } else {
                std::cout << "The tree is empty" << std::endl;
        }

}

int Tree::min ()
{
        if ( root ) {
                node* temp = root;
                while (temp -> left) {
                        temp = temp -> left;
                }
                return temp -> value;
        } else {
                std::cout << "The tree is empty" << std::endl;
        }
}

node* Tree::max_node (node* root)
{
        node* temp = root;
        if ( temp == NULL ) {
                return temp;
        } else if ( temp -> right == NULL ) {
                return temp;
        } else {
                return max_node ( temp -> right );
        }
}

node* Tree::min_node (node* root)
{
        node* temp = root;
        if ( temp == NULL ) {
                return temp;
        } else if ( temp -> left == NULL ) {
                return temp;

        } else {
                return min_node (temp -> left);
        } 
}


void Tree::delete_node (node* &root, int value)
{
        if ( !root ) {
                std::cout << "The tree is empty" << std::endl;
                return;
        }
        if ( value < root -> value ) {
                delete_node ( root -> left, value );
        } else if ( value > root -> value ) {
                delete_node ( root -> right, value );
        } else {
                if ( root -> left == NULL && root -> right == NULL ) {
                        delete root;
                        root = NULL;
                } else if ( root -> left && root -> right) {
                        node* max = max_node ( root -> left );
                        root -> value = max -> value;
                        delete_node ( root -> left , max -> value );
                } else {
                        node* child;
                        if ( root -> left ) {
                                child = root -> left;
                        } else {
                                child = root -> right;
                        }
                        node* current = root;
                        root = child;
                        delete current;
                }
        }
}

void Tree::remove (int value)
{
        delete_node ( root, value );
}

node* Tree::search ( int value )
{
        while ( root && root -> value != value ) {
                if ( value < root -> value ) {
                        root = root -> left;
                } else {
                        root = root -> right;
                }
        }
        return root;
}

int Tree::height(node* root)
{
        int left;
        int right;
        if ( !root ) {
                return 0;
        } else {
                left = height( root -> left );
                right = height ( root -> right );
        }
        if ( left > right ) {
                return left + 1;
        } else {
                return right + 1;
        }
} 
int Tree::height()
{
        return height (root);
}

int Tree::balance_factor(node* node)
{
        if ( !node ) {
                return 0;
        } else {
                int balance_factor;
                balance_factor = height(node -> right) - height(node -> left);
                return balance_factor;
        }
}

bool Tree::is_balanced(node * node)
{
        int balance;
        balance = balance_factor (node);
        if ( balance >= -1 && balance <= 1 ) {
                return true;
        } else {
                return false;
        }
}

bool Tree::inorder_balance(node* root)
{
        if ( root ) {
                inorder_balance( root -> left );
                if ( !is_balanced (root) ) {
                        return false;
                }
                inorder_balance( root -> right);
        }
}

bool Tree::balance()
{
        if ( inorder_balance(root) ) {
                return true;
        } else {
                return false;
        }
}

void Tree::print_tree (node* root, int level)
{
        int indent = 5;
        if ( root ) {
                print_tree (root -> right, level + 1);
                for ( int i = 1; i <= level * indent; ++i ) {
                        std::cout << " ";
                }
                std::cout << root -> value << std::endl;
                print_tree (root -> left, level + 1);
        }
}

void Tree::print()
{
        print_tree (root, 0);
}

void Tree::delete_tree (node* root)
{
        if ( root -> right ) {
                delete_tree (root -> right);
        }
        if ( root -> left ) {
                delete_tree (root -> left);
        }
        delete root;
}

Tree::~Tree()
{
        delete_tree (root);
}
