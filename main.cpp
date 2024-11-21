#include "iostream"
#include "queue.hpp"

int main()
{
    
    Queue q(10);

    q.enqueue(1);
    q.enqueue(2);
    
    q.print();
    std::cout << "size: " << q.size() << std::endl;
    std::cout << "front: " << q.front() << std::endl;
    std::cout << "rear: " << q.rear() << std::endl;
    std::cout << "remove: " << q.dequeue() << std::endl;
    q.print();
    std::cout << "size: " << q.size() << std::endl;
    std::cout << "front: " << q.front() << std::endl;
    std::cout << "rear: " << q.rear() << std::endl;

    return 0;
}