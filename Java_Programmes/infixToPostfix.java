import java.util.Scanner;
import java.lang.Character;
public class infixToPostfix {
    public static int MAX = 20000;
    public static char [] infix = new char[MAX];
    public static char [] postfix = new char[MAX];
    public static char [] stack = new char[MAX];
    public static char choice;
    public static int top=-1;
    public static int i=0;public static int j=0;
    
    public static boolean isalnum(char ch) {
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
    public static void InfixToPostfix()
    {
    while(infix[i]!='\0')
    {
        choice=infix[i];
        if(isalnum(choice))
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
                }push(choice);
        }
        i++;
    
    }
    System.out.println("The postfix expression is ");
    for (int i=0;i<postfix.length;i++)
    {
        System.out.print(postfix[i]);
    }
    }
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in); 
    System.out.println("Enter an infix expression\n");
    infix = in.next().toCharArray();
    int len=infix.length;
    infix[len-2]=')';
    push('(');
    InfixToPostfix();
    }

    
}
