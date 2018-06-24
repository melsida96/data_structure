#ifndef NODE_H
#define NODE_H

class node 
{
        public:
                int value;
                node* left;
                node* right;
                node* parent;
                node(int value);
                node();
                ~node();
};


#endif
