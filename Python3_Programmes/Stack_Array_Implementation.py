import sys
stack = []
top = -1
MAX = sys.maxsize
def push():
    global stack
    global top
    global MAX
    if(top==MAX-1):
        print("Stack overflow")
        return
    else:
        top+=1
        print("Enter the element you want to push into the stack")
        element = int(input())
        stack.append(0)
        stack[top]=element
        print(f"The element {element} has been pushed into the stack")
        return
def pop():
    global stack
    global top
    global MAX
    if(top==-1):
        print("Stack underflow")
        return
    else:
        element = stack[top]
        stack.remove(element)
        top-=1
        print(f"The element {element} has been popped from the stack")
        return
def peek():
    if(top==-1):
        print("Stack underflow")
        return
    else:
        element = stack[top]
        print(f"The element {element} is at the top of the stack")
        return
    
def display():
    if(top==-1):
        print("Stack underflow")
        return
    else:
        for i in range(top+1):
            print(f"{stack[i]} ",end='')
        print("");
        return

def main():
    global stack
    global top
    choice = 0
    while choice!=5:
        print("Enter 1 for push\n2 for pop\n3 for peek\n4 for display\n5 to quit");
        choice = int(input())
        if(choice==1):
            push()
            continue
        elif(choice== 2):
            pop()
            continue
        elif(choice== 3):
            peek()
            continue
        elif(choice== 4):
            display()
            continue
        elif(choice== 5):
            print("Quit");
            choice = 5
            continue
        else:
            print("Wrong entry\nRetry\n")
            continue
    
        
         
if __name__=='__main__':
    main()