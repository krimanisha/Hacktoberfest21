#include <bits/stdc++.h>
using namespace std;

bool canPlaceCows(int arr[], int n, int cows, int distance)
{
    int coordinate = arr[0], count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - coordinate >= distance)
        {
            count++;
            coordinate = arr[i];
        }
        if (count == cows)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 8, 4, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int cows = 3;

    sort(arr, arr + n);

    int low = 1, high = arr[n - 1] - arr[0], res;
    while (low <= high)
    {
        int mid = (low + high) >> 1;
        if (canPlaceCows(arr, n, cows, mid))
        {
            res = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout << res;

    return 0;
}