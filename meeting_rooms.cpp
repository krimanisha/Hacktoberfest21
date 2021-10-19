#include<bits/stdc++.h>
using namespace std;

    bool sortcol(const vector<int>&v1,const vector<int>&v2)
    {   if(v1[1]!=v2[1])
        return v1[1]<v2[1];
        else
        return v1[0]<v2[0];
    }

int main()
{
    vector<vector<int>> a;
    int rr,cc;
    cin>>rr>>cc;
    for(int i=0;i<rr;i++)
        for(int j=0;j<cc;j++)
            {
                int zz;
                cin>>zz;
                a[rr].push_back(zz);
            }

    
   int n=a.size();
   
   sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    cout<<a[i][0]<< " "<<a[i][1]<<endl;
    cout<<endl;
   sort(a.begin(),a.end(),sortcol);
    for(int i=0;i<n;i++)
    cout<<a[i][0]<< " "<<a[i][1]<<endl;
   
   priority_queue <int, vector<int>, greater<int>>  b;
    
    int y=1;
    b.push(a[0][1]);
    
    for(int i=1;i<n;i++)
    {
        if(a[i][0]>=b.top())
       { b.pop();b.push(a[i][1]);}
        else
        {y++;b.push(a[i][1]);}
    }
    cout<<y<<endl;
    return 0;
    
}
