def Add(r1, c1, r2, c2, Matrix1, Matrix2):
    Result = []
    if(r1==r2 and c1==c2):
        print("The addition is:")
        for i in range(r1):
            Result.append([])
            for j in range(c2):
                Result[i].append(Matrix1[i][j]+Matrix2[i][j])
                print(f"{Result[i][j]} ",end="")
            print()
        return
    else:
        print("Matrix addition is not possible")
        return


def Subtract(r1, c1, r2, c2, Matrix1, Matrix2):
    Result = []
    if(r1==r2 and c1==c2):
        print("The subtraction is:")
        for i in range(r1):
            Result.append([])
            for j in range(c2):
                Result[i].append(Matrix1[i][j]-Matrix2[i][j])
                print(f"{Result[i][j]} ",end="")
            print()
        return
    else:
        print("Matrix subtraction is not possible")
        return


def Multiply(r1, c1, r2, c2, Matrix1, Matrix2):
    Result = []
    if(c1==r2):
        print("The multiplication is:")
        for i in range(r1):
            Result.append([])
            for j in range(c2):
                Result[i].append(0)
                for k in range(r2):
                    Result[i][j] += Matrix1[i][k] * Matrix2[k][j]
                print(f"{Result[i][j]} ",end="")
            print()
        return
        
    else:
        print("Matrix multiplication is not possible")
        return


def main():
    loop = 1
    choice = 0
    while (loop):
        r1 = int(input("Enter the number of rows of the first matrix\n"))
        c1 = int(input("Enter the number of columns of the first matrix\n"))
        matrix1 = []
        matrix2 = []
        print("Enter the first matrix elements")
        for i in range(r1):
            matrix1.append([])
            for j in range(c1):
                matrix1[i].append(int(input()))
            
        r2 = int(input("Enter the number of rows of the second matrix\n"))
        c2 = int(input("Enter the number of columns of the second matrix\n"))
        print("Enter the second matrix elements row by row")
        for i in range(r2):
            matrix2.append([])
            for j in range(c2):
                matrix2[i].append(int(input()))
        
        choice = int(input("Enter \n1 for Matrtix addition\n2 for Matrix Subtraction\n3 for Matrix Multiplication\n4 to Quit\n"))
        if(choice==1):
            Add(r1, c1, r2, c2, matrix1, matrix2)
        elif(choice==2):
            Subtract(r1, c1, r2, c2, matrix1, matrix2)
        elif(choice==3):
            Multiply(r1, c1, r2, c2, matrix1, matrix2)
        elif(choice==4):
            print("Exiting. Thanks for using the Matrix program. Have a good day")
            loop = 0
        else:
            print("Enter a valid choice")
        
         
if __name__=='__main__':
    main()