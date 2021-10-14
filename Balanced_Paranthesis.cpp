#include<bits/stdc++.h>
using namespace std;
int main()
{
    string A;
    cin>>A;
    stack<int> s;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]=='(')
        {
            s.push(i);
        }
        else
        {
            if(s.empty())
            {
                return 0;
            }
            s.pop();
        }
    }
    if(s.empty()==1)
        cout<<"balanced";
    else
        cout<<"not balanced";
    return 0;
    
}
