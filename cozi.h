#include <stdio.h>
#include <stdlib.h>

typedef int Dat;

struct Nod
{
    Dat val;
    struct Nod *next;
};

typedef struct Nod Nod;

struct Queue
{
    Nod *front ,*rear ;
};

typedef struct Queue Queue ;

Queue* createQueue();

void enQueue(Queue *q, Dat v);

Dat deQueue(Queue *q);

int isEmptyCozi(Queue *q);

void deleteQueue(Queue *q);
