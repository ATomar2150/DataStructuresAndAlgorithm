#ifndef NUMBERLIST_H
#define NUMBERLIST_H
#include <cstddef>

class NumberList
{
    private:
            struct ListNode
            {
                double value; //The value in the node
                struct ListNode *next; //self Referencial data structure, points to the next node
            };

            ListNode* head; //List head pointer
    public:
            NumberList()
            {
                head = NULL;
            }

            //destructor
            ~NumberList();

            //LinkedList operations
            void appendNode(double);
            void insertNode(double);
            void deleteNode(double);
            void displayNode() const;
    
};

#endif