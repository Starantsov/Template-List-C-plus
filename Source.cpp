#include <iostream>

using namespace std;

template <class T> class Node
{
private:
	T value;
	Node* next;

public:
	void setData(T i)
	{
		value = i;
	}
	void setNextNull()
	{
		next = NULL;
	}
	void setNext(Node<T>* i)
	{
		next = i;
	}
	T get() {
		return value;
	}
	Node<T>* getNext()
	{
		return next;
	}

};

template <class T> class List
{
private: Node<T> *head, *tail;

public:

	List()
	{
		head = NULL;
		tail = NULL;
	}

	void printlist()
	{
		if (head) {
			Node<T> *p = head;

			while (p) {
				cout << p->get() << " -> ";
				p = p->getNext();
			}

			cout << endl;
		}
	}
	
	void add(T info)
	{
		if (head == NULL) 
		{
			head = new Node<T>;
			head->setData(info);
			tail = head;
		}
		else 
		{
			Node<T>* temp = new Node<T>;
			temp->setData(info);
			temp->setNextNull();
			tail->setNext(temp);
			tail = tail->getNext();
		}
	}
};

int main() {

	List<int> firstList;

	firstList.add(3122);
	firstList.add(111);
	
	firstList.printlist();
	
	system("pause");
	return 1;
}