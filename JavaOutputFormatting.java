import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            System.out.println("================================");
            int count;
            for(int i=0; i<3 ;i++){
                String s1 = sc.next();
                int x = sc.nextInt();
                System.out.print(s1);
                if (s1.length() < 15){
                    count = s1.length();
                    count = 15 - s1.length();
                    for (int j = 0; j < count; j++){
                        System.out.print(" ");
                    }
                    
                }
                
                if (x < 10){
                    System.out.println("00" + x);
                } else if (x < 100){
                    System.out.println("0" + x);
                } else {
                    String s = Integer.toString(x);
                    System.out.println(s.substring(0,3));
            
                }
            }
                
            System.out.println("================================");

    }
}



