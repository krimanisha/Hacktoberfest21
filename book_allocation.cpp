#include <bits/stdc++.h>
using namespace std;

int maxOf(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int sumOf(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

bool isFeasible(int arr[], int n, int k, int res)
{
    int student = 1, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum + arr[i] > res)
        {
            student++;
            sum = arr[i];
        }
        else
        {
            sum += arr[i];
        }
    }
    return student <= k;
}

int minPages(int arr[], int n, int k)
{
    int min = maxOf(arr, n);
    int max = sumOf(arr, n);
    int res = 0;
    while (min <= max)
    {
        int mid = (min + max) / 2;
        if (isFeasible(arr, n, k, mid))
        {
            res = mid;
            max = mid - 1;
        }
        else
        {
            min = mid + 1;
        }
    }
    return res;
}

int main()
{
    int arr[] = {10, 10, 20, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    cout << "Minimum number of pages = " << minPages(arr, n, k) << endl;

    return 0;
}