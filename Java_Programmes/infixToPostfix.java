import java.util.Scanner;
import java.lang.Character;
import java.io.*;
public class infixToPostfix {
    public static int MAX = 200;
    public static char [] infix = new char[MAX];
    public static char [] infix_read = new char[MAX];
    public static char [] postfix = new char[MAX];
    public static char [] stack = new char[MAX];
    public static char choice;
    public static int top=-1;
    public static int i=0;public static int j=0;
    
    public static boolean is_alnum(char ch) {
        return Character.isDigit(ch) || Character.isLetter(ch);
    }
    public static int precedence(char choice)
    {
        switch (choice)
        {
            case '^':return 3;
            case '*':case '/': return 2;
            case '+':case '-':return 1; 
            default: return 0;
        }
    }
    public static void push(char item)
    {
            stack[++top]=item;
    }
    public static char pop()
    {
            return stack[top--];
    }
    public static void InfixToPostfix(int len)
    {
        PrintStream stream = new PrintStream(System.out);
    while(infix[i]!='\0')
    {
        choice=infix[i];
        if(choice==' ')
        {
            i++;
            continue;
        }
        else if(is_alnum(choice))
        {
            postfix[j]=choice;
            postfix[++j]='\0';
        }
        else if(choice=='(')
        {
            push(choice);
        }
        else if(choice==')')
        {
            char a;
            while((a=pop())!='(')
            {
                postfix[j]=a;
                postfix[++j]='\0';
            }
        }
        else
        {
            while (precedence(stack[top])>=precedence(choice))
            {
                postfix[j]=pop();
                postfix[++j]='\0';
            }
            push(choice);
        }
        i++;
    
    }
    System.out.println("The postfix expression is ");
    stream.println(postfix);
    stream.flush();
    }
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        PrintStream stream = new PrintStream(System.out);
        System.out.println("Enter an infix expression\n");
        infix_read = in.nextLine().toCharArray();
        for(int k=0;k<infix_read.length;k++)
        {
            infix[k] = infix_read[k];

        }
        int len=infix_read.length;
        System.out.println(len);
        stream.println(infix_read);
        stream.flush();
        infix[len]=')';
        infix[++len]='\0';
        push('(');
        InfixToPostfix(len);
        in.close();
    }

    
}
