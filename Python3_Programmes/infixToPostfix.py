stack = []
postfix = []
infix=""
i=0


def precedence(choice):
    if(choice=='^'):
        return 3
    elif(choice=='*'or choice=='/'):
        return 2
    elif(choice=='+' or choice=='-'):
        return 2
    else:
        return 0
    

def InfixToPostfix():
    global infix
    global choice
    global i
    while(infix[i]!='d'):
        choice=infix[i];
        if(choice==' '):
            i+=1
            continue
        elif(choice.isalnum()):
            postfix.append(choice)
        elif(choice=='('):
            stack.append(choice)
        elif(choice==')'):
            
            while(stack[-1]!='('):
                postfix.append(stack.pop())
            stack.pop()
        else:
            while(precedence(stack[-1])>=precedence(choice)):
                postfix.append(stack.pop())
            stack.append(choice)
        i+=1
    res=''
    for i in postfix:
        res+=i
    print(f"The postfix expression is {res[0:-2]}")
    return
    
    
def main():
    global infix
    infix = input("Enter an infix expression\n")
    len_str=len(infix)
    print(f"{infix}")
    infix = infix+')'
    infix = infix+'end'
    stack.append('(')
    InfixToPostfix()

if __name__=='__main__':
    main()
