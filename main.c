#include "stive.h"
#include "cozi.h"
#include <string.h>

int main()
{
    Node *p = NULL;
    Queue *q = NULL;
    Dat y;
    char c, sir[]="(((()09(s)d()(sa)()d";
    int n,a;
    for (int i = 0; i < strlen(sir); i++) {
        c = sir[i];
        if(sir[i]=='('){
            push(&p, c);
            push(&p, i);
        }
        if(sir[i]==')'){
            pop(&p);
            pop(&p);
        }
    }

    if(pop(&p) != NULL){
    printf("Exista paranteze fara pereche pe pozitiile: \n");
    } else printf ("Toate parantezele au pereche");

    while(pop(&p) != NULL){
        a = pop(&p);
        printf("%c", a);
        pop(&p);
    }

    deleteStack(p);
    p = NULL;
    q = createQueue();
    printf("\nCate elemente? n=");
    scanf("%d",&n);
    printf("Introduceti numerele: ");
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&y);
        enQueue(q,y);
    }
    for(i=0;i<n;i++){
        y=deQueue(q);
        push(&p,y);
    }
    for(i=0;i<n;i++){
        y=pop(&p);
        enQueue(q,y);
    }
    for(i=0;i<n;i++){
        y=deQueue(q);
        printf("%d ",y);
    }
    return 0;
}

