import java.util.Scanner;
public class Stack_Array_Implementation {
public static int MAX = 100000;
public static int [] stack = new int[MAX];
public static int top = -1;
public static void main(String args[])
{
    Scanner in = new Scanner(System.in);
    int choice = 0;
    do
    {
        System.out.print("Enter 1 for push\n2 for pop\n3 for peek\n4 for display\n5 to quit\n");
        choice = in.nextInt();
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
                System.out.print("Quit\n");
                choice = 5;
                break;
            default:
                System.out.print("Wrong entry\nRetry\n");
                break;
        }
    }
    while(choice!=5);
    in.close();
}

public static void push()
{
    Scanner in = new Scanner(System.in);
    if(top==MAX-1)
    {
        System.out.print("Stack overflow\n");
        return;
    }
    else
    {
        int element;
        top+=1;
        System.out.print("Enter the element you want to push into the stack\n");
        element = in.nextInt();
        stack[top]=element;
        System.out.print("The element "+element+" has been pushed into the stack\n");
        return;
    }
}

public static void pop()
{
    if(top==-1)
    {
        System.out.print("Stack underflow\n");
        return;
    }
    else
    {
        int element;
        element = stack[top];
        top-=1;
        System.out.print("The element "+element+" has been popped from the stack\n");
        return;
    }
}

public static void peek()
{
    if(top==-1)
    {
        System.out.print("Stack underflow\n");
        return;
    }
    else
    {
        int element;
        element = stack[top];
        System.out.print("The element "+element+" is at the top of the stack\n");
        return;
    }
}

public static void display()
{
    if(top==-1)
    {
        System.out.print("Stack underflow\n");
        return;
    }
    else
    {
        for(int i = 0; i<=top; i++)
        {
            System.out.print(stack[i]+" ");
        }
        System.out.print("\n");
        return;
    }
}
}
