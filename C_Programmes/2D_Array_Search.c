//Design a C program to perform searching in a 2 Dimensional array

#include<stdio.h>
void Search(int row, int col, int [row][col],int);

int main()
{
    int key = 0;
    int row = 0, col = 0;
    printf("Enter the number of rows of the array\n");
    scanf("%d",&row);
    printf("Enter the number of columns of the array\n");
    scanf("%d",&col);
    int Array[row][col];
    printf("Enter the array elements\n");
    for (int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            scanf("%d",&Array[i][j]);
        }
    }
    printf("Enter search element\n");
    scanf("%d",&key);
    Search(row, col, Array, key);
    return 0;
}

void Search(int row, int col , int Array[row ][col],int key)
{
    for (int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            if(key == Array[i][j])
            {
                printf("The element is found at position [%d %d] \n", i+1, j+1);
                return;
            }
        }
    }
    printf("The element is not found \n");
    return;
}
