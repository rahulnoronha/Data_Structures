//Perform the operations enqueue, dequeue, and display by implementing queue using arrays
#include<iostream>
#include <climits>
using namespace std;
#define MAX INT_MAX
int Queue[MAX];
int rear = -1;
int front = -1;
int isFull();
int isEmpty();
void enqueue();
void dequeue();
void display();

int main()
{

    int choice = 0;
    do
    {
       cout<<"Enter 1 for enqueue\n2 for dequeue\n3 for display\n4 to quit"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
               cout<<"Quit"<<endl;
                choice = 4;
                break;
            default:
               cout<<"Wrong entry\nRetry"<<endl;
                break;
        }
    }
    while(choice!=4);
    return 0;
}

int isEmpty()
{
    if(front == -1 || front>rear)
    {
        return 1;
    }
    return 0;
}

int isFull()
{
    if(rear == MAX-1)
    {
        return 1;
    }
    return 0;
}

void enqueue()
{
    if(isFull())
    {
       cout<<"Queue overflow"<<endl;
        return;
    }
    else
    {
        int element;
        if(front == -1)
        {
            front = 0;
            rear = 0;
        }
        else
        {
            rear += 1;
        }
       cout<<"Enter the element you want to enqueue into the queue"<<endl;
        cin>>element;
        Queue[rear]=element;
       cout<<"The element "<<element<<" has been enqueued into the queue"<<endl;
        return;
    }
}

void dequeue()
{
    if(isEmpty())
    {
       cout<<"Queue underflow"<<endl;
        return;
    }
    else
    {
        int element;
        element = Queue[front];
        front += 1;
       cout<<"The element " <<element<<" has been dequeued from the queue"<<endl;
        return;
    }
}

void display()
{
    if(isEmpty())
    {
       cout<<"Queue underflow"<<endl;
        return;
    }
    else
    {
        for(int i = front; i<=rear; i++)
        {
           cout<<Queue[i]<<" ";
        }
       cout<<endl;
        return;
    }
}