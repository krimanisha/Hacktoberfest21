#include <bits/stdc++.h>
using namespace std;

vector<bool> sieveOfEratosthenes(int n)
{
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        for (int j = 2 * i; j <= n; j += i)
        {
            isPrime[j] = false;
        }
    }
    return isPrime;
}

int main()
{
    vector<bool> isPrime = sieveOfEratosthenes(20);
    for (int i = 0; i <= 20; i++)
    {
        cout << i << boolalpha << " " << isPrime[i] << boolalpha << endl;
    }
    return 0;
}
