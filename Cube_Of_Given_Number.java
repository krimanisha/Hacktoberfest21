
/**
 * Find the Cube of given number  
 */
import java.util.Scanner;

public class CubeOfGivenNumber {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter number : ");
        int n = scan.nextInt();
        int res = n*n*n;
        System.out.println(res);
    }
}
