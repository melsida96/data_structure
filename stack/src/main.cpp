#include <stack.hpp>
#include <iostream>

int main()
{       
        stack s;
        s.push(7);
        s.push(9);
        s.push(-1);
        s.print();
        std::cout << std::endl;
        s.pop();
        s.print();
        std::cout << std::endl;
        std::cout << "The size of stack: " ;
        std::cout << s.get_size() << std::endl;
        return 0;
}

