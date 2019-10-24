#include<iostream>

using namespace std;

class Node{
	int val;
	Node *next, *prev;
public:
	Node(const int=0);
	Node(const Node&);
	~Node();
	void setNext(Node&);
	void setPrev(Node&);
	void printList();
	void addAtPos(Node&,const int);
	void removeNode();
	int getVal() const;
	friend void Joseph(const Node&,const int,const int);
};
