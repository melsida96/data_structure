#include <stack.hpp>
#include <iostream>
#include <cassert>

void is_empty_test()
{
        stack s1;
        bool empty = s1.is_empty();
        assert ( true == empty );
        s1.push(10);
        //s1.push(20);
        s1.push(30);
        bool not_empty = s1.is_empty();
        assert ( false == not_empty );
        std::cout << "is_empty pass!" << std::endl;
}

void get_size_test()
{
        stack s2;
        int size = s2.get_size();
        assert ( 0 == size );
        s2.push(10);
        s2.push(20);
        s2.push(30);
        size = s2.get_size();
        assert ( 3 == size );
        std::cout << "get_size pass!" << std::endl;
}

void pop_test()
{
        stack s3;
        s3.push(10);
        s3.push(20);
        s3.push(30);
        int pop = s3.pop();
        assert ( 30 == pop );
        std::cout << "pop pass!" << std::endl;

}

int main()
{
        is_empty_test ();
        get_size_test ();
        pop_test ();
        return 0;
}
