#ifndef DYNAMICQUEUE_H
#define DYNAMICQUEUE_H

class DynamicQueue
{
    private:
            struct QueueNode
            {
                int value;
                QueueNode* next;
            };

            QueueNode* front;
            QueueNode* rear;
            int numItems;

    public:
            DynamicQueue();
            ~DynamicQueue();

            void enqueue(int);
            void dequeue(int &);
            bool isEmpty() const;
            bool isFull() const;
            void clear();
};

#endif