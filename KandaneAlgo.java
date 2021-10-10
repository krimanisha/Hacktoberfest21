import java.util.Scanner;

// longest contiguous sum subarray
public class KandaneAlgo {
    public static int kandane(int a[], int n) {
        int max_so_far = Integer.MIN_VALUE, max_ending_here = 0;
        for (int i = 0; i < n; i++) {
            max_ending_here += a[i];
            if (max_so_far < max_ending_here)
                max_so_far = max_ending_here;
            if (max_ending_here < 0)
                max_ending_here = 0;
        }
        return max_so_far;
    }

    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of array");
        n = sc.nextInt();
        int a[] = new int[n];
        System.out.println("Enter array elements");
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        int sum = kandane(a, n);
        System.out.println("Longest contiguous sum is " + sum);
    }
}
