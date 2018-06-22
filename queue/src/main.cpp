#include <queue.hpp>
#include <iostream>

int main()
{
        queue q;
        q.dequeue();
        std::cout << "The size of queue: ";
        std::cout << q.size() << std::endl;
        q.enqueue(7);
        q.enqueue(9);
        q.enqueue(5);
        q.enqueue(4);
        q.print();
        std::cout << q.peek()<< std::endl;
        q.print();
        std::cout << "The size of queue: ";
        std::cout << q.size() << std::endl;
        return 0;
}

