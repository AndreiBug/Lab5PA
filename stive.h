#include <stdio.h>
#include <stdlib.h>

typedef char Data;

struct Node
{
    Data val;
    struct Node *next;
};

typedef struct Node Node;

Data top(Node *top);

void push(Node**top, Data v);

Data pop(Node**top);

int isEmptyStive(Node*top);

void deleteStack(Node**top);
