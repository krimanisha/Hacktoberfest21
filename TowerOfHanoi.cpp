#include <bits/stdc++.h>
 
using namespace std;

// Tower of Hanoi - https://youtu.be/q6RicK1FCUs

// Globally defined vector
int c = 0;
vector <int> s;

// Recursive function
void TOH(int n, int A, int B, int C)
{
    if(n>0)
    {
        TOH(n-1, A, C, B);
        s.push_back(A);
        s.push_back(C);
        TOH(n-1, B, A, C);
        c+=1;
    }
}
 
 
int main()
{
    int n;
    cin >> n;

    // Calling the recursive Tower of Hanoi function 
    TOH(n,1,2,3);
    cout << c << endl;
    for (int i=0; i<s.size(); i+=2) {
        cout <<"Hoop moved from " << s[i] << " to " << s[i+1] << endl;
    }
    return 0;
}