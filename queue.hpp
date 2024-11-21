#ifndef QUEUE_H
#define QUEUE_H

class Queue
{

public:

    // Constructor / Destructor
    Queue(int cap);
    ~Queue();

    void print();

    void enqueue(int item);
    int dequeue();
    int front();
    int rear();
    bool isEmpty();
    int size();

private:
    int _capacity, _size, _front, _rear;
    int* arr;

    bool isFull();

};

#endif //QUEUE_H