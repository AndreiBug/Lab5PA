#include <stdio.h>
#include <stdlib.h>

typedef int Data;

struct Node
{
    Data val;
    struct Node *next;
};

typedef struct Node Node;

struct Queue
{
    Node *front ,*rear ;
};

typedef struct Queue Queue ;

Queue* createQueue();

void enQueue(Queue *q, Data v);

Data deQueue(Queue *q);

int isEmptyCozi(Queue *q);

void deleteQueue(Queue *q);
