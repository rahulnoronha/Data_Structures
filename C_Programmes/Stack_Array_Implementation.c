//Perform the operations push, pop, peek and display by implementing stack using arrays

#include<stdio.h>
#include<limits.h>
#define MAX INT_MAX
int stack[MAX];
int top = -1;

void push();
void pop();
void peek();
void display();

int main()
{

    int choice = 0;
    do
    {
        printf("Enter 1 for push\n2 for pop\n3 for peek\n4 for display\n5 to quit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Quit\n");
                choice = 5;
                break;
            default:
                printf("Wrong entry\nRetry\n");
                break;
        }
    }
    while(choice!=5);
    return 0;
}

void push()
{
    if(top==MAX-1)
    {
        printf("Stack overflow\n");
        return;
    }
    else
    {
        int element;
        top+=1;
        printf("Enter the element you want to push into the stack\n");
        scanf("%d",&element);
        stack[top]=element;
        printf("The elemenet %d has been pushed into the stack\n",element);
        return;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("Stack underflow\n");
        return;
    }
    else
    {
        int element;
        element = stack[top];
        top-=1;
        printf("The elemenet %d has been popped from the stack\n",element);
        return;
    }
}

void peek()
{
    if(top==-1)
    {
        printf("Stack underflow\n");
        return;
    }
    else
    {
        int element;
        element = stack[top];
        printf("The elemenet %d is at the top of the stack\n",element);
        return;
    }
}

void display()
{
    if(top==-1)
    {
        printf("Stack underflow\n");
        return;
    }
    else
    {
        for(int i = 0; i<=top; i++)
        {
            printf("%d ",stack[i]);
        }
        printf("\n");
        return;
    }
}