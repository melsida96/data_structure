#ifndef LIST_HPP
#define LIST_HPP
#include <node.hpp>


/**
 * @class list
 * @brief List of integer type.
 */
class list 
{ 
        private:
                node* first;
                node* last;
                int count;
        public:
                /**
                 * @name list
                 * @brief The default constructor of the class.
                 */
                list ();

                /**
                 * @name list
                 * @brief The overloaded constructor of the class.
                 * @param value is an integer type number, which is the value
                 * of the node.
                 */
                list (int value);

                /**
                 * @name list
                 * @brief The destructor of the class.
                 */
                ~list ();

                /**
                 * @name add
                 * @brief The function adds an element into the list.
                 * @param index is an unsigned integer type number that points
                 * to the index where the element should be added.
                 * @param value is an integer type number, which is the value
                 * of the added element.
                 * @return The function doesn't return any value.
                 */
                 void add (unsigned int index, int value);

                /**
                 * @name remove
                 * @brief Removes the given element of the list.
                 * @param index is an unsigned integer type number that points
                 * to the index of the element that should be removed.
                 * @return The function doesn't return any value.
                 */
                void remove (unsigned int index);
                
                /**
                 * @name check_index
                 * @brief Checks if the index is in range or not.
                 * @param index is an unsigned integer type number.
                 * @return Returns boolean type value.
                 */
                bool check_index (unsigned int index);

                /**
                 * @name search_index
                 * @brief Finds the index of the element by its value.
                 * @param value is an integer type number, which is the value
                 * of the searched element.
                 * @param retIndex is a pointer to pointer to int.
                 * @return The function doesn't return any value. 
                 */
                void search_index (int value, int** retIndex);
                
                /**
                 * @name get_index
                 * @brief Gets the index of the element by its value.
                 * @param value is an integer type number, which is teh value
                 * of the searched element.
                 * @return The function returns an unsigned integer type number
                 * which is the index of the searched element. 
                 */
                unsigned int get_index (int value);

                /**
                 * @name print
                 * @brief  The function prints the list to the console.
                 * @return doesn't return any value.
                 */
		void print ();

                /**
                 * @name get_node
                 * @brief Gets a node from the list by index.
                 * @param index is an unsigned integer type value which is the
                 * index of the returned node.
                 * @return Returns a pointer to node.
                 */
		node* get_node (unsigned int index);

                /**
                 * @name delete_node
                 * @brief Deletes a node from the list by index.
                 * @param index is an unsigned integer type number which is the
                 * index of the node that should be deleted.
                 * @return Doesn't return any value.
                 */
		void delete_node (unsigned int index);

                /**
                 * @name search_value
                 * @brief Finds the value of the element by its index.
                 * @param index is an unsigned integer type number, which is
                 * the index of the searched element.
                 * @return Returns an integer type number, which is the value
                 * of the searched element.
                 */
                int search_value (unsigned int index);

                /**
                 * @name swap
                 * @brief Swaps two given elements of the list.
                 * @param first_index is an unsigned integer type number: the
                 * index of the first element.
                 * @param second_index is an unsigned integer type number the
                 * index of the second element.
                 * @return Doesn't return any value.
                 */
                void swap (unsigned int first_index, unsigned int second_index);
                
                /**
                 *@name size()
                 *@brief The function counts how many elements has the list.
                 *@return The function returns an integer type number, which is the 
                 *size of the list (count of elements).
                 */
                int size();

};

#endif

