#include<stdio.h>
#include<stdlib.h>
#define MAX 4

int arr[MAX];
int top=-1;
void push(int data)
{
    if (top==MAX-1)
    {
        printf("overflow");
    }
    top=top+1;
    arr[top]=data;
}
int pop()
{
    int value;
    if(top==-1){
        printf("underflow");
        exit(1);
    
    }
    value=arr[top];
    top=top-1;
    return  value;
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("underflow");
        return;
    }
    for(i=top;i>=0;i--)
       printf("%d ",arr[i]);
    printf(" \n ");
}
int main()
{
    int choice,data;
    while(1)
    {
        printf("\n");
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.display value\n");
        printf("4.exit\n");
        printf("enter your choice :--");
        scanf("%d ",&choice);

        switch(choice){
            case 1:
            printf("enter the element to be pushed:--");
            scanf("%d ",&data);
            push(data);
            break;

            case 2:
            data=pop();
            printf("deleted element is %d\n",data);
            break;
            
            case 3:
            display();
            break;

            case 4:
            exit(1);

            default:
            printf("wrong choice");       
            
        }
    }
    return 0;
}