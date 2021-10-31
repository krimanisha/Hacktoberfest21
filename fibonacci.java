public class fibonacci
{  
    public static void main(String args[])  
    {    
    int n1=0;
    int n2=1;
    int n3;
    int i,t=25;    
    System.out.print(n1+" "+n2);
    for(i=2;i<t;++i)
    {    
          n3=n1+n2;    
          System.out.print(" "+n3);    
          n1=n2;    
          n2=n3;    
    }    
      
    }
}  