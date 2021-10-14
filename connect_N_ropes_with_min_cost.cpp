#include <bits/stdc++.h>
using namespace std;

int minCost(int arr[], int n)
{
    // it is a min-heap
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
    }

    int ans = 0;
    while (pq.size() > 1)
    {
        int first = pq.top();
        pq.pop();
        int second = pq.top();
        pq.pop();

        int sum = first + second;
        ans += sum;
        pq.push(sum);
    }
    return ans;
}

int main()
{
    int arr[] = {4, 3, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The minimum cost is: " << minCost(arr, n);

    return 0;
}