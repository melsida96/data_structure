#ifndef QUEUE_HPP
#define QUEUE_HPP
#include <node.hpp>

/**
 * @class queue
 * @brief Implementation of queue using linked list.
 * */

class queue
{
        private:
                node* front;
                node* rear;
                int count;
        public:
                /**
                 * @name queue()  
                 * @brief Constructor of the class.
                 */
                queue ();
                
                /**
                 * @name ~queue()
                 * @brief Destructor of the class.
                 */
                ~queue ();
                        
                /**
                 *@name size()
                 *@brief The function returns the size of the queue (count of elements).
                 *@return The function returns an integer type number
                 * */
                int size ();

		/**
                 * @name print
                 * @brief  The function prints the queue to the console.
                 * @return Doesn't return any value.
                 */
                void print ();
		
                /**
                 *@name enqueue()
                 *@brief The function adds an element to the queue after the rear element.
                 *@param value is an integer type number, which is the value of the added element.
                 *@return The function doesn't return any value.
                 */
                void enqueue (int value);

                /**
                 *@name dequeue()
                 *@brief The funtion removes the first element of the queue.
                 *return The function returns an integer type number, which is the value of removed element.
                 * */
                int dequeue ();

                /**
                 * @name peek
                 * @brief Returns the value of the first element of the queue
                 * @return Returns an integer type number which is the value of
                 * the first element of the queue
                 */
                int peek ();
};

#endif
