#include <stdio.h>
#include <stdlib.h>
#include "dstruct.h"


int main()
{
    //1

    Stack *st = createStack(10); // Size of stack is 

    pushStack(st, 5);
    pushStack(st, 3);
    pushStack(st, 7); 

    popStack(st);
    popStack(st);

    peek(st);

    deleteStack(st);
    
    printf("\n");

    // 2

    List *list = NULL;

    push_front(&list, 2);

    push_front(&list, 3);

    push_front(&list, 4);

    pop_front(&list);

    pop_front(&list);

    printList(list);

    free(list);

    return 0;
}
