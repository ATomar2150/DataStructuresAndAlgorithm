#ifndef INTQUEUE_H
#define INTQUEUE_H

class IntQueue
{
    private:
            int* queueArray; //Points to the queue array
            int queueSize; //queue size
            int front; //Subscript of the queue front
            int rear; //Subscript of the queue rear
            int numItems; //Numbers of items in the queue
    
    public:
            //Constructor
            IntQueue(int);
            IntQueue(const IntQueue &);

            //Destructor
            ~IntQueue();

            //Queue operations
            void enqueue(int);
            void dequeue(int &);
            bool isEmpty() const;
            bool isFull() const;
            void clear();
};

#endif