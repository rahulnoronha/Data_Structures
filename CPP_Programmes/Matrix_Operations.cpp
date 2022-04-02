//C++ program to perform the matrix operations addition, subtraction and multiplication according to the users preference

#include<iostream>
using namespace std;

void Add(int r1, int c1, int r2, int c2, int **Array1, int **Array2 )
{
    if(r1==r2 && r2==c2)
    {
        int Result[r1][c1];
        cout<<"The addition is:"<<endl;
        for (int i = 0; i<r1; i++)
            {
                for(int j = 0; j<c1; j++)
                {
                    Result[i][j] = 0;
                    Result[i][j] = Array1[i][j] + Array2[i][j];
                    cout<<Result[i][j]<<" ";
                }
                cout<<endl;
            }
        return;
    }
    else
    {
        cout<<"Matrix addition is not possible"<<endl;
        return;
    }

}

void Subtract(int r1, int c1, int r2, int c2, int **Array1, int **Array2 )
{
    if(r1==r2 && r2==c2)
    {
        int Result[r1][c1];
        cout<<"The subtraction is:"<<endl;
        for (int i = 0; i<r1; i++)
            {
                for(int j = 0; j<c1; j++)
                {
                    Result[i][j] = 0;
                    Result[i][j] = Array1[i][j] - Array2[i][j];
                    cout<<Result[i][j]<<" ";
                }
                cout<<endl;
            }
        return;
    }
    else
    {
        cout<<"Matrix subtraction is not possible"<<endl;
        return;
    }

}

void Multiply(int r1, int c1, int r2, int c2, int **Array1, int **Array2 )
{
    if(r2==c1)
    {
        int Result[r1][c2];
        cout<<"The multiplication is:"<<endl;
        for (int i = 0; i<r1; i++)
            {
                for(int j = 0; j<c2; j++)
                {
                    Result[i][j] = 0;
                    for (int k=0;k<r2;k++)
                    {
                        Result[i][j] += Array1[i][k] * Array2[k][j];
                    }
                    cout<<Result[i][j]<<" ";
                }
                cout<<endl;
            }
    }
    else
    {
        cout<<"Matrix multiplication is not possible"<<endl;
    }

}

int main()
{
    int r1, c1, r2, c2;
    int choice = 0;
    int loop = 1;
    while(loop)
    {
        cout<<"Enter the number of rows of the first matrix"<<endl;
        cin>>r1;
        cout<<"Enter the number of columns of the first matrix"<<endl;
        cin>>c1;
        int **Array1;
        Array1 = new int *[r1];
        cout<<"Enter the array elements"<<endl;
        for (int i = 0; i<r1; i++)
        {
            Array1[i] = new int[c1];
            for(int j = 0; j<c1; j++)
            {
                cin>>Array1[i][j];
            }
        }
        cout<<"Enter the number of rows of the second matrix"<<endl;
        cin>>r2;
        cout<<"Enter the number of columns of the second matrix"<<endl;
        cin>>c2;
        int **Array2;
        Array2 = new int *[r2];
        cout<<"Enter the array elements"<<endl;
        for (int i = 0; i<r2; i++)
        {
            Array2[i] = new int[c2];
            for(int j = 0; j<c2; j++)
            {
                cin>>Array2[i][j];
            }
        }
        cout<<"Enter 1 for Matrix addition\n2 for Matrix Subtraction\n3 for Matrix Multiplication\n4 to Quit"<<endl;
        cin>>choice;
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
                cout<<"Invalid entry\nRetry"<<endl;
                break;
        }
    }
    return 0;
}

