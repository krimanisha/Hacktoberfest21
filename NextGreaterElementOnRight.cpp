#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> ngor(vector<int>arr)  
{
    stack<int>st;
    vector<int>ans(arr.size(),arr.size());
    for(int i=0;i<arr.size();i++)
    {
        while(st.size()!=0&&arr[st.top()]<arr[i])
        {
            ans[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    return ans;
}

int main(int argc,char**argv){
    vector<int> arr{2,3,4,5,6};
    vector<int>ans=ngor(arr);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}