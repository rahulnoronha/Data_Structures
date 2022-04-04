import java.util.Scanner;
public class Queue_Array_Implementation {
public static int MAX = 100000;
public static int [] queue = new int[MAX];
public static int rear = -1;
public static int front = -1;
public static void main(String args[])
{
    Scanner in = new Scanner(System.in);
    int choice = 0;
    do
    {
        System.out.print("Enter 1 for enqueue\n2 for dequeue\n3 for display\n4 to quit\n");
        choice = in.nextInt();
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
                System.out.print("Quit\n");
                choice = 4;
                break;
            default:
                System.out.print("Wrong entry\nRetry\n");
                break;
        }
    }
    while(choice!=4);
    in.close();
}

public static int isFull()
{
    if(rear == MAX-1)
    {
        return 1;
    }
    return 0;
}

public static int isEmpty()
{
    if(front == -1 || front>rear)
    {
        return 1;
    }
    return 0;
}

public static void enqueue()
{
    Scanner in = new Scanner(System.in);
    if(isFull()==1)
    {
        System.out.print("Queue overflow\n");
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
        System.out.print("Enter the element you want to enqueue into the queue\n");
        element = in.nextInt();
        queue[rear]=element;
        System.out.print("The element "+element+" has been enqueued into the queue\n");
        return;
    }
}

public static void dequeue()
{
    if(isEmpty()==1)
    {
        System.out.print("Queue underflow\n");
        return;
    }
    else
    {
        int element;
        element = queue[front];
        front += 1;
        System.out.print("The element "+element+" has been dequeued from the queue\n");
        return;
    }
}

public static void display()
{
    if(isEmpty()==1)
    {
        System.out.print("Queue underflow\n");
        return;
    }
    else
    {
        for(int i = front; i<=rear; i++)
        {
            System.out.print(queue[i]+" ");
        }
        System.out.print("\n");
        return;
    }
}
}
