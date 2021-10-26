import java.util.*;
class array2D_diag

{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int n=4;
        int num[][]=new int[n][n];
        for (int r=0;r<n;r++)
        {
            System.out.println("Enter integers for Row No. "+r);
            for (int c=0;c<n;c++)
            {
                num[r][c]=sc.nextInt();
            }
        }
        int diag1=0,diag2=0;
        for (int r=0;r<n;r++)
        {
            for (int c=0;c<n;c++)
            {
                System.out.print(num[r][c]+"\t");
                if (r==c)
                diag1=diag1+num[r][c];
                else if (r+c==n-1)
                diag2=diag2+num[r][c];
            }
            System.out.println();
        }
        
        System.out.println("Sum of 1st diagonals = "+diag1);
        System.out.println("Sum of 2nd diagonals = "+diag2);
    }
}
