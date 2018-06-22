#include <queue.hpp>
#include <iostream>


queue::queue()
{
        front = NULL;
        rear = NULL;
        count = 0;
}

void queue::enqueue (int value)
{
        node* added = new node;
        added -> value = value;

        if ( NULL == front ) {
                added -> next = NULL;
                front = added;
                rear = added;
        } else {
               rear -> next = added;
               added -> next = NULL;
               rear = added;
        }
        ++count;
}

int queue::dequeue()
{
        if ( NULL == front ) {
                std::cout << "The queue is empty!" << std::endl;
        } else {
                node* pop;
                pop = front;
                int value = pop -> value;
                front = front -> next;
                delete pop;
                --count;
                return value;

        }
}
int queue::peek()
{
        if ( NULL == front )
        {
                std::cout << "The queue is empty!" << std::endl;
        } else {
                return front -> value;
        }
}

int queue::size()
{
        return count;
}

void queue::print()
{
        if ( NULL == front) {
                std::cout << "The queue is empty!" << std::endl;
        } else {
                node* temp = front;
                while ( temp ) {
                        std::cout << temp -> value << ' ';
                        temp = temp -> next;
                }
                std::cout << std::endl;
        }
}

queue::~queue()
{
        while ( front ) {
                node* temp;
                temp = front;
                front = front -> next;
                delete temp;
        }
        delete front;
}

