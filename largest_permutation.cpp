//Given an integer array A of size N consisting of unique integers from 1 to N. You can swap any two integers atmost B times.

//Return the largest lexicographical value array that can be created by executing atmost B swaps.

#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,x;
cin>>n;
vector<int>a;
for(int i=0;i<n;i++)
{cin>>x;
a.push_back(x);}
int B;
cin>>B;
unordered_map<int,int>m;
for(int i=0;i<n;i++){
    m[a[i]]=i;
}
for(int i=0;i<n;i++){
    if(B>0){
        if(a[i]!=n-i){
            B--;
            m[a[i]]=m[n-i];
            a[m[n-i]]=a[i];
            m[n-i]=i;
            a[i]=n-i;
        }
    }else{
        break;
    }
}
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
return 0;

}