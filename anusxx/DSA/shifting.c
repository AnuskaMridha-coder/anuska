#include<stdio.h>
#include<stdlib.h>
#define MAX 4

int arr[MAX];
int top=-1;

void push(int data)
{
    int i;
    top +=1;
    for(i=top; i>0; i--)
        arr[i]=arr[i-1];
    arr[0] = data;
}
void display()
{
    int i;
    if (top == -1)
    {
        printf("underflow");
    }
    for(i=0; i<=top; i++)
        printf("%d ", arr[i]);
    printf(" \n ");
}
int main()
{
  push(23);
  push(34);
  push(56);
  display( );
  return 0;
}
