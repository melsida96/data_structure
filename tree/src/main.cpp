#include <tree.hpp>
#include <iostream>

int main()
{
        Tree b;
        b.insert(100);
        b.insert(80);
        b.insert(70);
        b.insert(78);
        b.insert(65);
        b.insert(75);
        b.insert(77);
        //b.insert(130);
        //b.insert(140);
        //b.insert(70);
        //b.insert(80);
        int height = b.height();
        std::cout << "Height: " ;
        std::cout << height << std::endl;
        //b.test_balance();
        //b.remove(70);
        b.print();
        std::cout << std::endl;
        std::cout << "Balance: ";
        std::cout << b.balance() << std::endl;
        return 0;
}
