#include "dstruct.h"
#include <stdio.h>
#include <stdlib.h>

//Struct Stack using array

Stack* createStack(unsigned capacity) 
{
    Stack* stack = (Stack*) malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*) malloc(stack->capacity * sizeof(int));

    return stack;
}

void deleteStack(Stack *st)
{
    free(st->array);
    free(st);
}

int isEmpty(Stack* st)
{
    if(st->top == -1)
        return 1;

    return 0;
}

void pushStack(Stack *stack,int val)
{
    if((stack->capacity-1) == stack->top)
        printf("Stack is full...\n");
    stack->array[++stack->top] = val; 
    printf("Element %d added to stack...\n", val);
}

void popStack(Stack* st)
{
    if(isEmpty(st))
        printf("Stack is empty...\n");
    else
        printf("Elemend %d deleted from stack...\n",st->array[st->top--]);
}

void peek(Stack *st)
{
    if(isEmpty(st))
        printf("Stack is empty...\n");
    else
        printf("Peek of stack is: %d \n", st->array[st->top]);
}

// Stack structure using Linked List

List* createNode(List **phead, int value)
{
    List *new_node = (List*) malloc(sizeof(List));
    new_node->data = value;
    new_node->pNext = NULL;
    *phead  = new_node;

    return new_node;
}

void push_front(List** phead,int val) // Add element to stack
{
    List *new_node = (List*) malloc(sizeof(List));
    new_node->data = val;
    printf("Element %d added...\n", new_node->data);
    new_node->pNext = *phead;
    *phead = new_node;
}

void pop_front(List **phead) // Delete element from stack
{
    List *tmp = *phead;
    printf("Element %d deleted...\n", tmp->data);
    *phead = (*phead)->pNext;
    free(tmp);
}

void printList(List *head) // Show stack
{
    if(head == NULL)
    {
        printf("Stack is empty...\n");
    }

    printf("Stack: ");

    for (List *p = head; p != NULL; p = p->pNext)
    {
        printf("%d ", p->data);
    }
    printf("\n");
}