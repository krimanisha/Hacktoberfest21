import java.util.*; 
public class FibonacciSeries
{  
    public static void main(String args[])  
    {   
        Scanner sc=new Scanner(System.in);
        int n1=0,n2=1,n3,i,count=0;   
        System.out.print("Enter the number of Fibonacci Numbers to be printed :");
        count=sc.nextInt();
        System.out.println();
        System.out.print(n1+" "+n2);//printing 0 and 1    

        for(i=2;i<count;++i)//loop starts from 2 because 0 and 1 are already printed    
        {    
            n3=n1+n2;    
            System.out.print(" "+n3);    
            n1=n2;    
            n2=n3;    
        } 
        sc.close();
    }
}  
