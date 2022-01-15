#include <stdio.h>
#include <stdlib.h>

#define INT_MIN -2147483648

// Stack struct 

typedef struct Stack
{
    int top; 
    unsigned capacity; 
    int *array; 
}Stack;


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


int main()
{

    Stack *st = createStack(10); 

    pushStack(st, 5);
    pushStack(st, 3);
    pushStack(st, 7); 

    popStack(st);
    popStack(st);
    popStack(st);

    peek(st);

    deleteStack(st);

    return 0;
}
