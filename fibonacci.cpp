#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

int main ()
{
    int n;
    printf("Enter the Fibonacci Number which you wish to see in the Fibonacci Series: ");
    scanf("%d", &n);
    cout << fib(n);
    getchar();
    return 0;
}
