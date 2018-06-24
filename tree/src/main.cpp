#include <tree.hpp>
#include <iostream>

int main()
{
        Tree b;
        b.insert(100);
        b.insert(50);
        b.insert(150);
        b.insert(40);
        b.insert(10);
        b.insert(110);
        b.insert(130);
        b.insert(140);
        b.insert(70);
        b.insert(80);
        int height = b.height();
        std::cout << "Height: " ;
        std::cout << height << std::endl;
        b.remove(100);
        b.print();
        std::cout << std::endl;
        std::cout << "Balance: ";
        std::cout << b.balance() << std::endl;
        return 0;
}
