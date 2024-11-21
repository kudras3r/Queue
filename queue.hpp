
#ifndef QUEUE_H
#define QUEUE_H

class Queue 
{

    public:
        // Constructor
        Queue();

        // Methods
        void enqueue();
        int dequeue();
        void front();
        void rear();
        bool isEmpty();
        int size();

};

#endif //QUEUE_H