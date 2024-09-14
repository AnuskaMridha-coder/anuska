#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int stack_arr[MAX];
int top=-1;
void push(int data )
{
    if (top==MAX-1)
    {
    printf("stack overfloww\n");
    }
    top=top+1;
    stack_arr[top]=data;
}
int main()
{
    push(3);
    push(4);
    push(6);
    push(7);
    return 0;
}