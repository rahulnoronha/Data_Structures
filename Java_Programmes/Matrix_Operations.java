import java.util.Scanner;
public class Matrix_Operations {
    public static void main(String [] args)
    {
        Scanner in = new Scanner(System.in);
        int r1, c1, r2, c2;
        int choice = 0;
        int loop = 1;
        while(loop==1)
        {
            System.out.println("Enter the number of rows of the first matrix");
            r1 = in.nextInt();
            System.out.println("Enter the number of columns of the first matrix");
            c1 = in.nextInt();
            int [][] Array1 =new int [r1][c1];
            System.out.println("Enter the array elements");
            for (int i = 0; i<r1; i++)
            {
                for(int j = 0; j<c1; j++)
                {
                    Array1[i][j] = in.nextInt();
                }
            }
            System.out.println("Enter the number of rows of the second matrix");
            r2 = in.nextInt();
            System.out.println("Enter the number of columns of the second matrix");
            c2 = in.nextInt();
            int [][] Array2 =new int [r2][c2];
            System.out.println("Enter the array elements");
            for (int i = 0; i<r2; i++)
            {
                for(int j = 0; j<c2; j++)
                {
                    Array2[i][j] = in.nextInt();
                }
            }
            System.out.println("Enter 1 for Matrix addition\n2 for Matrix Subtraction\n3 for Matrix Multiplication\n4 to Quit");
            choice = in.nextInt();
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
                    System.out.println("Invalid entryRetry");
                    break;
            }
        }
        in.close();

    }
    public static void Add(int r1, int c1, int r2, int c2, int [][] Array1, int [][] Array2 )
    {
        if(r1==r2 && r2==c2)
        {
            int [][] Result =new int [r1][c1];
            System.out.println("The addition is:");
            for (int i = 0; i<r1; i++)
                {
                    for(int j = 0; j<c1; j++)
                    {
                        Result[i][j] = 0;
                        Result[i][j] = Array1[i][j] + Array2[i][j];
                        System.out.print(Result[i][j]+" ");
                    }
                    System.out.println("");
                }
            return;
        }
        else
        {
            System.out.println("Matrix addition is not possible");
            return;
        }

    }

    public static void Subtract(int r1, int c1, int r2, int c2, int [][] Array1, int [][] Array2 )
    {
        if(r1==r2 && r2==c2)
        {
            int [][] Result =new int [r1][c1];
            System.out.println("The subtraction is:");
            for (int i = 0; i<r1; i++)
                {
                    for(int j = 0; j<c1; j++)
                    {
                        Result[i][j] = 0;
                        Result[i][j] = Array1[i][j] - Array2[i][j];
                        System.out.print(Result[i][j]+" ");
                    }
                    System.out.println("");
                }
            return;
        }
        else
        {
            System.out.println("Matrix subtraction is not possible");
            return;
        }

    }

    public static void Multiply(int r1, int c1, int r2, int c2, int  [][] Array1, int [][] Array2 )
    {
        if(r2==c1)
        {
            int [][] Result =new int [r1][c2];
            System.out.println("The multiplication is:");
            for (int i = 0; i<r1; i++)
                {
                    for(int j = 0; j<c2; j++)
                    {
                        Result[i][j] = 0;
                        for (int k=0;k<r2;k++)
                        {
                            Result[i][j] += Array1[i][k] * Array2[k][j];
                        }
                        System.out.print(Result[i][j]+" ");
                    }
                    System.out.println("");
                }
        }
        else
        {
            System.out.println("Matrix multiplication is not possible");
        }

    }
}
