#include "cozi.h"

Queue* createQueue(){
	Queue *q;
	q=(Queue *)malloc(sizeof(Queue));
	if (q==NULL) return NULL;
	q->front=q->rear=NULL;
	return q;
}

 void enQueue(Queue*q, Dat v){
	Nod* newNode=(Nod*)malloc(sizeof(Nod));
	newNode->val=v;
	newNode->next=NULL;
	if (q->rear==NULL) q->rear=newNode;
	else{
		(q->rear)->next=newNode;
		(q->rear)=newNode;
	}
	if (q->front==NULL) q->front=q->rear;
}

Dat deQueue(Queue*q) {
	Nod* aux; Dat d;
	if (isEmptyCozi(q)) return INT_MIN;

	aux=q->front;
	d=aux->val;
	q->front=(q->front)->next;
	free(aux);
	return d;
}

int isEmptyCozi(Queue*q){
	return (q->front==NULL);
}

void deleteQueue(Queue*q){
	Nod* aux;
	while (!isEmptyCozi(q)){
		aux=q->front;
		q->front=q->front->next;
		free(aux);
	}
	free(q);
}

