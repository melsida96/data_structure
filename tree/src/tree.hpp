#ifndef TREE_H
#define TREE_H
#include <node.hpp>

/**
 * @class bst
 * @brief Implementation of binary search tree
 */
class Tree
{
        private:
                node* root;
        public:
                /**
                 * @name bst
                 * @brief The default constructor of Tree class.
                 */
                Tree ();

                /**
                 * @name Tree
                 * @brief The overloaded constructor of bst class.
                 * @param value is an integer type number which is the value of
                 * the root of the binary tree.
                 */
                Tree (int value);

                /**
                 * @name ~bst
                 * @brief The destructor of Tree class.
                 */
                ~Tree();

                /**
                 * @name new_node
                 * @brief Adds a new node to the tree.
                 * @param value is an integer type number which is the value of
                 * the node that is being added.
                 * @return Returns a pointer to the node that was added.
                 */
                node* new_node (int value);

                /**
                 * @name max
                 * @brief Finds the largest value of the tree.
                 * @return Returns an integer type number that is the largest value of the tree.
                 */
                int max ();

                /**
                 * @name min
                 * @brief Finds the smallest value of the tree.
                 * @return Returns an integer type number that is the smallest
                 * value of the tree.
                 */
                int min ();

                /**
                 * @name insert
                 * @brief Adds a new node to the tree by calling new_node
                 * function.
                 * @param value is an integer type number which is the value of
                 * the node that is being added.
                 * @return Doesn't return any value.
                 */
                void insert (int value);

                /**
                 * @name remove
                 * @brief Removes a node from the tree.
                 * @param value is an integer type number that is the value of
                 * the removed node.
                 * @return Doesn't return any value.
                 */
                void remove (int value);

                /**
                 * @name inorder_print
                 * @brief Walks through all elements of the tree.
                 * @param root is a pointer to the root of the tree.
                 * @return Doesn't return any value.
                 */
                void inorder_print (node* root);

                /**
                 * @name inorder_print
                 * @brief Prints all elements of the tree.
                 * @return Doesn't return any value.
                 */
                void print ();

                /**
                 * @name min_node
                 * @brief Finds the node, which has the smallest value.
                 * @param root is a pointer to node, which is teh root.
                 * @return The function returns a pointer to node, which is searched.
                 * */
                node* min_node (node* root);

                /**
                 * @name max_node
                 * @brief Finds the node, which has the largest value.
                 * @param root is a pointer to node, which is the root.
                 * @return The function returns a pointer to node, which was
                 * searched.
                 * */
                node* max_node (node* root);

                /**
                 * @name delete_node
                 * @brief The function deletes a node by its value.
                 * @param root is a pointer to node, which is the root.
                 * @param value is an integer type number, which is the value
                 * of node, which will be deleted.
                 * @return The function doesn't return any value.
                 * */
                void delete_node (node* &root, int value);

                /**
                 * @name search
                 * @brief The function finds a node by its value.
                 * @param value is an integer type number, which is the value
                 * of node, which was searched.
                 * */
                node* search (int value);

                /**
                 * @name height
                 * @brief The function calculates the height of the tree.
                 * @return The function returns an integer type number, which
                 * is the height of the tree.
                 * */
                int height();

                /**
                 * @name height
                 * @brief The function calculates the height of the tree.
                 * @param root is a pointer to node, which is the root of the tree
                 * or the subtree.
                 * @return The function returns is an integer type number,
                 * which is the height of the tree or the subtree.
                 * */
                int height (node* root);

                /**
                 * @name balance_factor
                 * @brief The function calculates the balance factor of the
                 * node.
                 * @param node is a pointer to node, which balance factor will
                 * be calculated.
                 * @return The function returns an integer type number (-1, 0,
                 * 1), which is the balance factor of the node.
                 * */
                int balance_factor (node* node);

                /**
                 * @name is_balanced
                 * @brief The function checks if the tree is balanced or not.
                 * @param node is a pointer to node, which is the root of the
                 * tree or subtree.
                 * */
                bool is_balanced (node* node);

                /**
                 * @name inorder_balance
                 * @brief The function walks through all nodes of the tree
                 * and checks if the node is balanced or not.
                 * @param root is a pointer to node, which is the root of the
                 * tree.
                 * @return The function returns a boolean type value, which
                 * says is the tree or subtree balanced or not.
                 * */
                bool inorder_balance (node* root);
                
                /**
                 * @name balance
                 * @brief The function checks is the tree balanced or not.
                 * @return The function returns a boolean type value, which
                 * says is the tree balanced or not. 
                 * */  
                bool balance ();

                /**
                *@name print_tree
                *@brief The function prints the tree.
                *@param root is a pointer to node type, which is the root of the
                tree.
                *@param level is an integer type number, the level of the root.
                *@return The function doesn't return any value.
                */
                void print_tree (node* root, int level);
                
                /**
                 * @name delete_tree
                 * @brief The function deletes the tree.
                 * @param root is a pointer to node type, which is the root of
                 * the tree.
                 * @return Function doesn't return any value.
                 * */
                void delete_tree (node* root);
};

#endif
