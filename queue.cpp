#include "queue.hpp"
#include "iostream"

Queue::Queue(int cap) : _capacity(cap), _front(0), _rear(-1), _size(0)
{
	arr = new int[cap];
}

Queue::~Queue()
{
	delete[] arr;
}

void Queue::print()
{
	for (int i = _front; i <= _rear; i++)
	{
		std::cout << arr[i] << " <- ";
	}
	std::cout << std::endl;
}

void Queue::enqueue(int item)
{
	if (isFull())
	{
		throw std::overflow_error("Queue is full!");
	}
	
	_size++;
	_rear = (_rear + 1) % _capacity;

	arr[_rear] = item;
}

int Queue::dequeue()
{
	if (isEmpty())
	{
		throw std::underflow_error("Queue is empty!");
	}

	int item = arr[_front];

	_size--;
	_front = (_front + 1) % _capacity;

	return item;
}

int Queue::front()
{
	if (isEmpty())
	{
		throw std::underflow_error("Queue is empty!");
	}

	return arr[_front];
}

int Queue::rear()
{
	if (isEmpty())
	{
		throw std::underflow_error("Queue is empty!");
	}

	return arr[_rear];
}

bool Queue::isEmpty()
{
	return _size == 0;
}

int Queue::size()
{
	return _size;
}

bool Queue::isFull()
{
	return _size == _capacity;
}

