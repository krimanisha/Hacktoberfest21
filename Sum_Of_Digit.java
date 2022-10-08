/**  Find sum of even digit in given no N 
 * input : 
 * 7462
 * 
 * Output : 
 * 19
 * 
 */
import java.util.Scanner;

public class SumOfDigit {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter NUmber : ");
        int n = scan.nextInt();
        int sum = 0; int mod;
        while(n>0){
          mod = n%10; 
          sum +=mod;   
          n=n/10;
        }

        System.out.println("The sum of even digit is : " + sum);
    }
}
