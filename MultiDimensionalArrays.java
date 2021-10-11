import java.util.Scanner;

public class MultiDimensionalArrays {
    public static void main (String[] args) {
        
        Scanner scan =new Scanner(System.in);
        int m = scan.nextInt();
        int n = scan.nextInt();
    
        int[][] arr = new int[m][n];
        
        for(int i = 0; i<m; i++){
            for(int j=0;j<n;j++){
                arr[i][j] =scan.nextInt();
            }
        }
        int max = 0;
        for(int i=0; i<n;i++){
            int sum = 0;
            for(int j=0;j<m;j++){
                sum = sum+arr[j][i];
            }
    
            max= Math.max(max,sum);
    
        }
    
        System.out.println(max);   
        scan.close(); 
    
    }   
                
    }
