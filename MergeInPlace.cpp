#include <bits/stdc++.h>
using namespace std;

void print(int a[], int m)
{
    for (int i = 0; i < m; ++i)
        cout << a[i] << ' ';
}

void merge(int a[], int b[], int m, int n)
{
    for (int i = 0, j; i < m; ++i)
    {
        int tmp = b[0];
        if (a[i] > tmp)
        {
            swap(a[i], tmp);
            for (j = 1; j < n; ++j)
            {
                if (b[j] > tmp)
                    break;
                else
                    b[j - 1] = b[j];
            }
            b[j - 1] = tmp;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a[] = { 3, 4, 5 };
    int b[] = { 1, 2, 6 };
    int m = sizeof(a) / sizeof(int);
    int n = sizeof(b) / sizeof(int);
    
    cout << "Array 1: ";
    print(a, m);
    cout << "\nArray 2: ";
    print(b, n);
    
    merge(a, b, m, n);
    cout << "\nAfter merging: ";
    print(a, m);
    print(b, n);

    return 0;
}
