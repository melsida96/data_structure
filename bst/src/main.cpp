#include <tree.hpp>
#include <iostream>

int main()
{
        Tree b;
        b.insert(100);
        b.insert(50);
        b.insert(150);
        b.insert(10);
        //b.insert(90);
        //b.insert(120);
        //b.insert(110);
        //b.insert(130);
        //b.insert(140);
        //b.insert(70);
        //b.insert(80);
        int height = b.height();
        std::cout << "Height: " ;
        std::cout << height << std::endl;
        b.remove(100);
        //b.insert (55);
        b.print();
        std::cout << std::endl;
        std::cout << "Balance: ";
        std::cout << b.balance() << std::endl;
        int max_value = b.get_max();
        int min_value = b.get_min();
        //std::cout << max_value << std::endl;
        //std::cout << min_value << std::endl;
        return 0;
}
