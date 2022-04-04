//Perform the operations enqueue, dequeue, and display by implementing queue using arrays

#include<stdio.h>
#include<limits.h>
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
        printf("Enter 1 for enqueue\n2 for dequeue\n3 for display\n4 to quit\n");
        scanf("%d",&choice);
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
                printf("Quit\n");
                choice = 4;
                break;
            default:
                printf("Wrong entry\nRetry\n");
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
        printf("Queue overflow\n");
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
        printf("Enter the element you want to enqueue into the queue\n");
        scanf("%d",&element);
        Queue[rear]=element;
        printf("The element %d has been enqueued into the queue\n",element);
        return;
    }
}

void dequeue()
{
    if(isEmpty())
    {
        printf("Queue underflow\n");
        return;
    }
    else
    {
        int element;
        element = Queue[front];
        front += 1;
        printf("The element %d has been dequeued from the queue\n",element);
        return;
    }
}

void display()
{
    if(isEmpty())
    {
        printf("Queue underflow\n");
        return;
    }
    else
    {
        for(int i = front; i<=rear; i++)
        {
            printf("%d ",Queue[i]);
        }
        printf("\n");
        return;
    }
}