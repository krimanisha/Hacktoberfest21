/*
PRINTING RIGHT TRIANGLE
EXPECTED OUTPUT:
5
* 
* * 
* * * 
* * * * 
* * * * * 
*/
import java.util.Scanner;
public class Main{
    public static void main (String args[]){
        Scanner sc = new Scanner(System.in);
        int i=0,j=0;
        int n=sc.nextInt();
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++){
                System.out.print("* ");
            }
            System.out.println();
        }
        
    }
}




