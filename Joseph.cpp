#include<iostream>
#include "Node.h"

using namespace std;

void Joseph(Node& head,const int p,const int i) {
	Node *aux=head.next,*temp;
	for (int k=0; k<p-1; k++) {
		aux=aux->next;
	}
	temp=aux;
	aux=aux->next;
	temp->removeNode();
	while (head.next!=&head) {
		for (int k=0; k<i-1; k++) {
			if (aux==&head) aux=aux->next;
			aux=aux->next;
		}
		if (aux==&head) aux=aux->next;
		temp=aux;
		aux=aux->next;
		temp->removeNode();
	}
}
