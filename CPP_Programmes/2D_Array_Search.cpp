//Design a C++ program to perform searching in a 2 Dimensional array

#include<iostream>
using namespace std;
void Search(int row, int col , int **Array,int key)
{
    for (int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            if(key == Array[i][j])
            {
                cout<<"The element is found at position [ "<<i+1<<" "<<j+1<<" ]"<<endl;
                return;
            }
        }
    }
    cout<<"The element is not found"<<endl;
    return;
}

int main()
{
    int key = 0;
    int row = 0, col = 0;
    cout<<"Enter the number of rows of the array"<<endl;
    cin>>row;
    cout<<"Enter the number of columns of the array"<<endl;
    cin>>col;
    int **Array;
    Array = new int *[row];
    cout<<"Enter the array elements"<<endl;
    for (int i = 0; i<row; i++)
    {
        Array[i] = new int[col];
        for(int j = 0; j<col; j++)
        {
            cin>>Array[i][j];
        }
    }
    cout<<"Enter search element"<<endl;
    cin>>key;
    Search(row, col, Array, key);
    return 0;
}


