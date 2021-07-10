//C program to perform the matrix operations addition, subtraction and multiplication according to the users preference

#include<stdio.h>
void Add(int r1, int c1, int r2, int c2, int [r1][c1], int [r2][c2]);
void Subtract(int r1, int c1, int r2, int c2, int [r1][c1], int [r2][c2]);
void Multiply(int r1, int c1, int r2, int c2, int [r1][c1], int [r2][c2]);

int main()
{
    int r1, c1, r2, c2;
    int choice = 0;
    int loop = 1;
    while(loop)
    {
        printf("Enter the number of rows of the first matrix\n");
        scanf("%d",&r1);
        printf("Enter the number of columns of the first matrix\n");
        scanf("%d",&c1);
        int Array1[r1][c1];
        printf("Enter the array elements\n");
        for (int i = 0; i<r1; i++)
        {
            for(int j = 0; j<c1; j++)
            {
                scanf("%d",&Array1[i][j]);
            }
        }
        printf("Enter the number of rows of the second matrix\n");
        scanf("%d",&r2);
        printf("Enter the number of columns of the second matrix\n");
        scanf("%d",&c2);
        int Array2[r2][c2];
        printf("Enter the array elements\n");
        for (int i = 0; i<r2; i++)
        {
            for(int j = 0; j<c2; j++)
            {
                scanf("%d",&Array2[i][j]);
            }
        }
        printf("Enter 1 for Matrtix addition\n2 for Matrix Subtraction\n3 for Matrix Multiplication\n4 to Quit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                Add(r1,c1,r2,c2,Array1, Array2);
                break;
            case 2:
                Subtract(r1,c1,r2,c2,Array1, Array2);
                break;
            case 3:
                Multiply(r1,c1,r2,c2,Array1,Array2);
                break;
            case 4:
                loop = 0;
                break;
            default:
                printf("Invalid entry\nRetry\n");
                break;
        }
    }
    return 0;
}

void Add(int r1, int c1, int r2, int c2, int Array1[r1][c1], int Array2[r2][c2] )
{
    if(r1==r2 && r2==c2)
    {
        int Result[r1][c1];
        printf("The addition is:\n");
        for (int i = 0; i<r1; i++)
            {
                for(int j = 0; j<c1; j++)
                {
                    Result[i][j] = 0;
                    Result[i][j] = Array1[i][j] + Array2[i][j];
                    printf("%d ",Result[i][j]);
                }
                printf("\n");
            }
        return;
    }
    else
    {
        printf("Matrix addition is not possible\n");
        return;
    }

}

void Subtract(int r1, int c1, int r2, int c2, int Array1[r1][c1], int Array2[r2][c2] )
{
    if(r1==r2 && r2==c2)
    {
        int Result[r1][c1];
        printf("The subtraction is:\n");
        for (int i = 0; i<r1; i++)
            {
                for(int j = 0; j<c1; j++)
                {
                    Result[i][j] = 0;
                    Result[i][j] = Array1[i][j] - Array2[i][j];
                    printf("%d ",Result[i][j]);
                }
                printf("\n");
            }
        return;
    }
    else
    {
        printf("Matrix subtraction is not possible\n");
        return;
    }

}

void Multiply(int r1, int c1, int r2, int c2, int Array1[r1][c1], int Array2[r2][c2] )
{
    if(r2==c1)
    {
        int Result[r1][c2];
        printf("The multiplication is:\n");
        for (int i = 0; i<r1; i++)
            {
                for(int j = 0; j<c2; j++)
                {
                    Result[i][j] = 0;
                    for (int k=0;k<r2;k++)
                    {
                        Result[i][j] += Array1[i][k] * Array2[k][j];
                    }
                    printf("%d ",Result[i][j]);
                }
                printf("\n");
            }
    }
    else
    {
        printf("Matrix multiplication is not possible\n");
    }

}