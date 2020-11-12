#ifndef NUMBERLIST_H
#define NUMBERLIST_H
#include <cstddef>

template <class T>
class NumberList
{
    private:
            struct ListNode
            {
                T value; //The value in the node
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
            void appendNode(T);
            void insertNode(T);
            void deleteNode(T);
            void displayNode() const;
    
};

#endif