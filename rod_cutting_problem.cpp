#include <bits/stdc++.h>
using namespace std;

int rodCutting(int len[], int price[], int N, int n)
{
    int t[n + 1][N + 1];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < N + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                t[i][j] = 0;
            }
        }
    }
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < N + 1; j++)
        {
            if (len[i - 1] > j)
            {
                t[i][j] = t[i - 1][j];
            }
            else
            {
                t[i][j] = max(price[i - 1] + t[i][j - len[i - 1]], t[i - 1][j]);
            }
        }
    }
    return t[n][N];
}

int main()
{
    int len[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int price[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int N = 8;
    int n = 8;

    cout << rodCutting(len, price, N, n);

    return 0;
}