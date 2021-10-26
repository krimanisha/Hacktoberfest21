#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Finding missing element/s in a sorted array
    cout << "A: ";
    int a[] = {6, 7, 8, 9, 11, 12, 15, 16, 17, 18};
    int dif = a[0] - 0;
    for (int i = 0; i < 10; i++)
    {
        if (dif != a[i] - i)
            while (dif < a[i] - i)
                cout << i + (dif++) << " ";
    }
    cout << endl;

    //Finding missing element/s in an unsorted array
    cout << "B: ";
    int b[] = {3, 7, 4, 9, 12, 6, 1, 11, 2, 10};
    bool hash[13] = {0};
    for (int i = 0; i < 10; i++)
    {
        hash[b[i]] = 1;
    }
    for (int i = 1; i < 13; i++)
    {
        if (hash[i] == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    //Find duplicated elements in a sorted array
    cout << "C: ";
    int c[] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};
    int lastDuplicate = 0;
    for (int i = 0; i < 9; i++)
    {
        if (c[i] == c[i + 1])
        {
            if (lastDuplicate == c[i])
                continue;
            else
            {
                lastDuplicate = c[i];
                cout << c[i] << "->";
                int j = i + 1;
                while (c[j] == c[i])
                    j++;
                cout << "Count:" << j - i << " ";
                i = j - 1;
            }
        }
    }
    cout << endl;

    //Finding duplicated in an unsorted array
    cout << "D: ";
    int d[] = {8, 3, 6, 4, 6, 5, 6, 8, 2, 7};
    int hash1[9] = {0};
    for (int i = 0; i < 10; i++)
    {
        hash1[d[i]]++;
    }
    for (int i = 1; i < 9; i++)
    {
        if (hash1[i] > 1)
            cout << i << "->Count: " << hash1[i] << " ";
    }
    cout << endl;

    //finding elements whoose sum in k
    cout << "E: ";
    int e[] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};
    int k = 10;
    int hash2[17] = {0};
    for (int i = 0; i < 10; i++)
    {
        if (hash2[k - e[i]] != 0 && k - e[i] > 0)
        {
            cout << e[i] << " " << 10 - e[i] << " :: ";
        }
        hash2[e[i]]++;
    }
    cout << endl;

    //for sorted
    cout << "F: ";
    int f[] = {1, 3, 4, 5, 6, 8, 9, 10, 12, 14};
    int i = 0, j = 10 - 1;
    while (i < j)
    {
        if (f[i] + f[j] == 10)
            cout << f[i++] << " " << f[j--] << " :: ";
        else if (f[i] + f[j] > 10)
            j--;
        else
            i++;
    }
}

// suppose  you  are  given  an  array  s[1….n] and a

//       procedure reverse ( s, I , j ) which  reverse  the  order of  elements  in  between position  I  and j (both inclusive).

//       what  does  the  following  the  sequence do,  where  1 ≤ k ≤  n:

//              reverse  (s,1,k) ;

//              reverse (s,k+1,n) ;

//              reverse (s, 1, n) ;