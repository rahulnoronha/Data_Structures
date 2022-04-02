//Perform the operations push, pop, peek and display by implementing stack using arrays

#include<iostream>
#include<climits>
using namespace std;
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
        cout<<"Enter 1 for push\n2 for pop\n3 for peek\n4 for display\n5 to quit"<<endl;
        cin>>choice;
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
                cout<<"Quit"<<endl;
                choice = 5;
                break;
            default:
                cout<<"Wrong entry\nRetry"<<endl;
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
        cout<<"Stack overflow"<<endl;
        return;
    }
    else
    {
        int element;
        top+=1;
        cout<<"Enter the element you want to push into the stack"<<endl;
        cin>>element;
        stack[top]=element;
        cout<<"The elemenet "<<element<<" has been pushed into the stack"<<endl;
        return;
    }
}

void pop()
{
    if(top==-1)
    {
        cout<<"Stack underflow"<<endl;
        return;
    }
    else
    {
        int element;
        element = stack[top];
        top-=1;
        cout<<"The elemenet "<<element<<" has been popped from the stack"<<endl;
        return;
    }
}

void peek()
{
    if(top==-1)
    {
        cout<<"Stack underflow"<<endl;
        return;
    }
    else
    {
        int element;
        element = stack[top];
        cout<<"The elemenet "<<element<<" is at the top of the stack"<<endl;
        return;
    }
}

void display()
{
    if(top==-1)
    {
        cout<<"Stack underflow"<<endl;
        return;
    }
    else
    {
        for(int i = 0; i<=top; i++)
        {
            cout<<stack[i]<<" ";
        }
        cout<<endl;
        return;
    }
}