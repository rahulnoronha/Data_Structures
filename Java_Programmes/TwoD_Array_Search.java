import java.util.Scanner;
public class TwoD_Array_Search {
    public static void main(String [] args)
    {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the number of rows of the array");
        int row = in.nextInt();
        System.out.println("Enter the number of columns of the array");
        int col = in.nextInt();
        int [][] Array =new int [row][col];
        System.out.println("Enter the array elements");
        for (int i = 0;i<row;i++)
        {
            for (int j=0;j<col;j++)
            {
                Array[i][j] = in.nextInt();
            }
        }
        System.out.println("Enter search element");
        int key = in.nextInt();
        Search(row, col, Array, key);
        in.close();

    }
    public static void Search(int row, int col , int [][] Array,int key)
    {
        for (int i = 0; i<row; i++)
        {
            for(int j = 0; j<col; j++)
            {
                if(key == Array[i][j])
                {
                    System.out.println("The element is found at position [ "+(i+1)+" "+(j+1)+" ]");
                    return;
                }
            }
        }
        System.out.println("The element is not found");
        return;
    }
}