import java.util.Scanner;

public class CheckPrimeOrNot {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter number : ");

        int n = scan.nextInt();

        int count =0;

        for(int i=1; i<=n; i++){
           
                if(n%i ==0){
                    count++;
                }
        }

        if(count ==2){
            System.out.println("The number " + n + " is prime ");
        }
        else{
            System.out.println("The Number " + n + " is not prime ");
        }
    }
}
