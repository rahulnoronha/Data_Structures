#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
using namespace std;
#define MAX 20000
char infix[MAX];
char postfix[MAX];
char stack[MAX];
char choice;
int top=-1;
int i=0;int j=0;
int precedence(char choice)
{
    switch (choice)
    {
        case '^':return 3; break;
        case '*':case '/': return 2; break;
        case '+':case '-':return 1; break;
        default: return 0; break;
    }
}
void push(char item)
{
        stack[++top]=item;
}
char pop()
{
        return stack[top--];
}
void InfixToPostfix()
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
cout<<"The postfix expression is "<<postfix<<endl;
}
int main()
{
    cout<<"Enter an infix expression"<<endl;
    cin>>infix;
    int len=strlen(infix);
    infix[len]=')';
    infix[++len]='\0';
    push('(');
    InfixToPostfix();
    return 0;
}