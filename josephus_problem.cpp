/*There are n people standing in a circle waiting to be executed. The counting out begins at some point in the circle and proceeds around the circle in a fixed direction. In each step, a certain number of people are skipped and the next person is executed. The elimination proceeds around the circle (which is becoming smaller and smaller as the executed people are removed), until only the last person remains, who is given freedom. Given the total number of persons n and a number k which indicates that k-1 persons are skipped and kth person is killed in circle. The task is to choose the place in the initial circle so that you are the last one remaining and so survive.
*/

#include <bits/stdc++.h>
using namespace std;

int josephus(int n, int k)
{
    if (n == 1)
    {
        return 0; // if 0 based indexing
    }
    return (josephus(n - 1, k) + k) % n;
}

int main()
{
    int n = 5; // there are 5 man standing in a circle

    /*ek gun hai 0 index wale ke pass or wo count karga 3 person including himself or shoot karega uss person ko or phir gun jo person mar gya hai uske neighbour wale ke pass jayegi or phir wo ase hi karega or aakhir mei jo person bach gya wo iss game ko jeet jayega*/
    int k = 3;
    cout << "The man who is safe is standing on position: " << josephus(n, k);

    return 0;
}