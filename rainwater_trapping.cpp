#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {3, 1, 2, 4, 0, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int left[n], right[n];

    // filling the left array
    left[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        left[i] = max(left[i - 1], arr[i]);
    }

    // filling the right array
    right[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = max(right[i + 1], arr[i]);
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += min(left[i], right[i]) - arr[i]; // formula at every index i
    }

    cout << "The maximum amount of water that can be trapped is: " << ans;

    return 0;
}