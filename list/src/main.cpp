#include "list.hpp"
#include <iostream>

int main()
{
       list l(10);
       l.add(1, 4);
       l.add(2, 1);
       l.add(3, 7);
       l.add(4, 9);
       l.add(5, 3);
       l.add(0, 33);
       std::cout << "Index: " ;
       std::cout << l.get_index(33) << std::endl;
       //l.print();
       //l.delete_node(0);
       //l.delete_node(5);
       //l.print();
       //l.print();
       //std::cout << std::endl;
       return 0;
} 
