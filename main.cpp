#include <iostream>
#include "Node.h"

using namespace std;

int main() {
	Node head;
	int n;
	cout<<"Introduceti numarul de persoane: ";
	cin>>n;
	for (int i=1;i<=n;i++) {
		Node *aux;
		aux=new Node(i);
		aux->addAtPos(head,i);
	}
	head.printList();
	Joseph(head,1,4);	
	return 0;
}
