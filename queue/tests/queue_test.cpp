#include <queue.hpp>
#include <iostream>
#include <cassert>

void enqueue_test()
{
        queue q;
        q.enqueue(10);
        q.enqueue(20);
        q.enqueue(30);
        int front = q.peek();
        assert ( 10 == front );
        std::cout << "enqueue pass!" << std::endl;
}

void size_test()
{
        queue q;
        int size = q.size();
        assert ( 0 == size );
        q.enqueue(10);
        q.enqueue(20);
        q.enqueue(30);
        size = q.size();
        assert ( 3 == size );
        std::cout << "size pass!" << std::endl;

}

void dequeue_test()
{
        queue q;
        q.enqueue(10);
        q.enqueue(20);
        q.enqueue(30);
        int value1 = q.dequeue();
        assert ( 10 == value1 );
        int value2 = q.dequeue();
        assert ( 20 == value2 );
        std::cout << "dequeue pass!" << std::endl;
}

int main()
{
        enqueue_test();
        size_test();
        dequeue_test();
        return 0;

}
