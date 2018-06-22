#ifndef STACK_HPP
#define STACK_HPP
#include <node.hpp>

/**
 * @class stack
 */
class stack
{
        private:
                node* top;
                int count;

        public:
                 
                /**
                 * @name stack()
                 * @brief The constructor of the class.
                 */
                stack ();
                /**
                 * @name ~stack()
                 * @brief The destructor of the class.
                 */
                ~stack ();

                /**
                 * @name push
                 * @brief The function adds an element to the collection.
                 * @param value is an integer type number, which is the value of the added element.
                 * @return The function doesn't return any value.
                 */
                void push (int value);

                /**
                 * @name pop
                 * @brief The function removes the most recently added element (top) and returns the
                 * value of that element.
                 * @return The function returns an integer type number, which is the value of the top.
                 */
                int pop ();

                /**
                 * @name print
                 * @brief The function prints the stack.
                 * @return The function doesn't return any value.
                 */
                void print (); 

                /**
                 * @name get_size()
                 * @brief The function returns the size of the stack (the count
                 * of elements).
                 * @return The function returns an integer type number, the
                 * size of the stack.
                 */
                int get_size ();
                
                /**
                 * @name is_empty
                 * @brief The function checks is the stack empty or not.
                 * @return The function returns boolean type value.
                 */
                bool is_empty ();
};

#endif
