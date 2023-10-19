#include<stack>
#include <iostream>
#include <vector>
#include<string>
using namespace std;

template<typename T>
class MyQueue {
private:
	DoublyNode<T>* start;
	DoublyNode<T>* end;
public:
	MyQueue() : start{ nullptr }, end{ nullptr } {}

	bool IsEmpty() {
		return start == nullptr, end == nullptr;

	}

	void Enqueue(T value) {
		DoublyNode<T> Node{ value };
		if (!IsEmpty()) {
			Node.prev = end;
			end->next = *Node;

		}
		else {
			start = Node;
			end = Node;
		}
	}

	void Show() {
		DoublyNode<T>* head = start;
		while (head->next != nullptr) {
			head = head->next;
			cout << head << " ";
		}
	}
};

template <typename T>
class DoublyNode {
private:
public:
	DoublyNode(T dataP) : data{ dataP }, next{ nullptr }, prev{ nullptr } {}




	Enqueue(T value) {
		DoublyNode* Node = new DoublyNode[value];

		Node->prev = end;

	}

	DoublyNode<T>* next;
	DoublyNode<T>* prev;
	T data;

};

template <typename T1>
class Stack
{
public:

	Stack() { top = EMPTY; }

	void Push(T1 value) {
		if (!isFull()) {
			st[++top] = value;
		}

	};
	T1 Pop() {
		if (!isEmpty()) {
			return st[top--];
		}
		else
			return 0;
	};
	void Clear() {
		top = EMPTY;
	};
	bool isEmpty() {
		return top == EMPTY;
	};
	bool isFull() {
		return top == FULL;
	};

	int CountElemetns() {
		top += 1;
	};

	T1 Peek() {
		return st[top];
	}

private:
	enum
	{
		EMPTY = -1,
		FULL = 20
	};
	T1 st[FULL + 1];
	int top;

};


class Queue {
	int* data;
	int maxLength;
	int queueLength;
public:
	Queue(int n) {
		maxLength = n;
		data = new int[maxLength];
		queueLength = 0;
	}
	~Queue() { delete[] data; }

	void Enqueue(int value) {
		if (!isFull()) {
			data[queueLength++] = value;
		}

	};
	int Dequeue() {
		if (!isEmpty()) {
			int tmp = data[0];
			for (int i = 0; i < queueLength; i++)
			{
				data[i - 1] = data[i];
			}
			queueLength--;
			return tmp;
		}
		else
			return 0;

	};
	void Clear() {
		queueLength = 0;
	};
	bool isEmpty() {
		return queueLength == 0;
	};
	bool isFull() {
		return queueLength == maxLength;
	};
	int GetCount() {
		return queueLength;
	};
	void Show() {
		for (int i = 0; i < queueLength; i++) {
			cout << data[i] << " ";
		}
		cout << endl;
	}
};


int main() {

}