#include <list.hpp>
#include <iostream>
#include <cstdlib>

list::list()
{
      first = NULL;
      count = 0;
}

list::list(int value)

{
        node* temp = new node;
        temp -> value = value;
        temp -> next = NULL;
	temp -> prev = NULL;
	first = temp;
        count = 1;
}

void list::add(unsigned int index, int value)
{
       
       if ( first == NULL) {
               std::cout << "Create the list" << std::endl;
               return;
       } 
       node* temp;
       node* added;
       temp = first;
       for (int i = 1; i < index; ++i) {
               temp = temp -> next;
               if ( temp == NULL ) {
                       std::cout << "There are less than " ;
                       std::cout << index << " elements." << std::endl;
                       return;
               }
       }
       
       added = new node;
       added -> value = value;
       if ( temp -> next == NULL ) {
               temp -> next = added;
               added -> next = NULL;
               added -> prev = temp;
       } else {
               added -> next = temp -> next;
               added -> next -> prev = added;
               temp -> next = added;
               added -> prev = temp; 
       }
       ++count;
       
}


int list::size()
{
        return count;
}

void list::search_index(int value, int** retIndex)
{
       unsigned int index = 0;
        node* temp = first;
        while ( temp ) {
              if ( temp -> value == value) 
                {
                        *retIndex = new int;
                        **retIndex = index;
                        return;
                } else {
                        ++index;
                        temp = temp -> next;
                }
        }
        std::cout << "No element of such value." << std::endl;
        *retIndex = NULL;
}

unsigned int list::get_index(int value) 
{
        int* index = NULL;
        search_index(value, &index);
        return *index;
}



bool list::check_index(unsigned int index)
{
        node* temp;
        temp = first;
        int c = 0;        
        while ( temp -> next ) {
                temp = temp -> next;
                ++c;
        }
        if ( index > c ) {
                return false;
        } else {
                return true;
        }
}

int list::search_value(unsigned int index)
{
        if ( check_index(index) ) {
                node* temp;
                temp = get_node(index);
                std::cout << temp -> value;
                std::cout << std::endl;
                return temp -> value;
        } else {
                std::cout << "Index is out of range." << std::endl;       
        }
}

void list::print ()
{
	node* temp = first;
	while ( temp ) {
	std::cout << temp -> value << ' ';
	temp = temp -> next;
        }
        std::cout << std::endl;
}

node* list::get_node(unsigned int index)
{
	node* temp = first;
	if ( check_index (index) ) {
		for (int i = 0; i < index; ++i) {
			temp = temp -> next;
		}
	}
	return temp;
}

void list::delete_node(unsigned int index) 
{	
	node* temp;
	if ( check_index (index) ) {
		temp = get_node(index);
	} else {
		return;
	}
	if ( first == NULL || temp == NULL ) {
		return;
	}
	if ( first == temp ) {
		first = temp -> next;
	}
	if ( temp -> next ) {
		temp -> next -> prev = temp -> prev;
	}
	if ( temp -> prev ) {
		temp  -> prev -> next = temp -> next;
	}
	delete temp;
        --count;
	return;
}

list::~list()
{
	node* temp = first;
	int i = 0;
	while ( temp ) {
		delete_node(i);
		temp = temp -> next;
		++i;
        }
	delete first;
}

void list::swap(unsigned int first_index, unsigned int second_index)
{
	node* node1 = get_node(first_index);
        node* node2 = get_node(second_index);
	if ( node1 -> prev ) {
		node1 -> prev -> next = node2; 
	} else { 
                first = node2;
        }
	if ( node2 -> prev ) {
		node2 -> prev -> next = node1;
	}
	if ( node1 -> next ) {
		node1 -> next -> prev = node2;
	} else {
                first = node1;
        }
	if ( node2 -> next ) {
		node2 -> next -> prev = node1;
	}
        std::swap(node1 -> prev, node2 -> prev);
	std::swap(node1 -> next, node2 -> next);
}
