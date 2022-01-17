#ifndef DSTRUCT_H
#define DSTRUCT_H
#define INT_MIN -2147483648

// Stack structure (LIFO)

// First method with using array

typedef struct Stack
{
    int top; 
    unsigned capacity; 
    int *array; 
}Stack;

Stack* createStack(unsigned capacity);

void deleteStack(Stack *st);

int isEmpty(Stack* st);

void pushStack(Stack *stack,int val);

void popStack(Stack* st);

void peek(Stack *st);

// Second method with using LinkedList

typedef struct LinkedList
{
    int data;
    struct LinkedList *pNext;
}List;

List* createNode(List **phead, int value);

void push_front(List** phead,int val);

void pop_front(List** phead);

void printList(List *head);


#endif