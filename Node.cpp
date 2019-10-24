#include<iostream>
#include "Node.h"

using namespace std;

Node::Node(const int ival) {
	val=ival;
	prev=this;
	next=this;
}

Node::Node(const Node& Node1) {
	val=Node1.val;
	prev=Node1.prev;
	next=Node1.next;
}

Node::~Node() {
	this->prev=NULL;
	this->next=NULL;
	delete prev;
	delete next;
}


void Node::setNext(Node& nextNode) {
	next=&nextNode;
}

void Node::setPrev( Node& prevNode) {
	prev=&prevNode;
}

void Node::printList(){
	Node *aux;
	aux=this->next;
	do {
		cout<<"Locul persoanei este: "<<aux->val<<endl;
		aux=aux->next;
	}while (aux!=this);
}

int Node::getVal() const{
	return val;
}

void Node::addAtPos(Node &head,const int index) {
	Node *aux=&head;
	for (int i=0;i<index-1;i++) {
		aux=aux->next;
	}
	this->next=aux->next;
	aux->next->prev=this;
	this->prev=aux;
	aux->next=this;
}

void Node::removeNode() {
	cout<<"Locul extras este: "<<this->getVal()<<endl;
	Node *n=this->next,*p=this->prev;
	p->next=n;
	n->prev=p;
	delete this;
}
