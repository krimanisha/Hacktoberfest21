import java.util.*;
class MAX_MIN{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int A[] = new int[size];
        int i;
        for (i = 0;i<size;i++){
            A[i] = sc.nextInt();
        }
        max_element(A);
    }
    public static void max_element(int max_A[]){
        int max = 0;
        int min = max_A[0];
        for(int j = 0;j<max_A.length;j++){
            if(max < max_A[j])
                max = max_A[j];
            if(min > max_A[j])
                min = max_A[j];
        }
        System.out.println("Max element is :" + max);
        System.out.println("Min element is :" + min);
    }
}
