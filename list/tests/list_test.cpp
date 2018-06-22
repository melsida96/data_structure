#include <list.hpp>
#include <iostream>
#include <cassert>

void add_test()
{
        list l(10);
        unsigned int index = 1;
        int value = 20;
        l.add(index, value);
        int get_i = l.get_index(value);
        assert (1 == get_i);
        std::cout << "add pass!" << std::endl;
}

void size_test()
{
        list l(10);
        int count = l.size();
        assert (1 == count);
        unsigned int index1 = 1;
        unsigned int index2 = 2;
        l.add (index1, 20);
        l.add (index2, 30);
        count = l.size();
        assert (3 == count);
        l.delete_node (index2);
        count = l.size();
        assert (2 == count);
        std::cout << "size pass!" << std::cout;
}

void swap_test()
{
        list l(10);
        unsigned int index0 = l.get_index (10);
        unsigned int index1 = 1;
        int value1 = 20;
        l.add (index1, value1);
        unsigned int index2 = 2;
        int value2 = 30;
        l.add (index2, value2);
        unsigned int index3 = 3;
        int value3 = 40;
        l.add (index3, value3);
        l.swap (index0, index3);
        unsigned int get_i0 = l.get_index (10);
        unsigned int get_i3 = l.get_index (40);
        assert (get_i0 == index3);
        assert (get_i3 == index0);
        l.swap (index1, index2);
        unsigned int get_i1 = l.get_index (20);
        unsigned int get_i2 = l.get_index (30);
        assert (get_i1 == index2);
        assert (get_i2 == index1);
        std::cout << "swap pass!" << std::endl;
}

int main()
{
        add_test();
        size_test();
        swap_test();
        return 0;
}
