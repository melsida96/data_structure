#include <stack.hpp>
#include <iostream>


stack::stack()
{
        top = NULL;
        count = 0;
}

void stack::push(int number)
{
        node* newNode = new node;
        newNode -> value = number;
        if ( top == NULL) {
                newNode -> prev = NULL;
                top = newNode;
        } else { 
                newNode -> prev = top;
                top = newNode;
        }
        ++count;
}

stack::~stack()
{
        while ( top ) {
                node* temp;
                temp = top;
                top = top -> prev;
                delete temp;
        }
        delete top;
}

int stack::pop()
{
        if ( top == NULL ) {
                std::cout << "The stack was empty!" << std::endl;
        } else {
                node* pop;
                pop = top;
                top = top -> prev;
                --count;
                return pop -> value;
                delete pop;
        }
}

int stack::get_size()
{
        return  count;
}

bool stack::is_empty()
{
        if ( NULL == top) {
                return true;
        } else {
                return false;
        }
}

void stack::print()
{
        if ( NULL == top ) {
                std::cout << "The stack was empty!" << std::endl;
        } else {
                node* temp = top;
                while ( temp ) {
                        std::cout << temp -> value;
                        std::cout << ' ' ;
                        temp = temp -> prev;
                }
        }
}


