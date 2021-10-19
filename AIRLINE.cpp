#include <iostream>
using namespace std;
 
#define ll long long
#define for0(i,n) for(int i = 0;i<n;i++)
int main()
{
    //your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int A,B,C,D,E,S=0,f=0;
        int arr[3];
        for0(i,3){
            cin >> arr[i];
            S+=arr[i];
        }
        cin >> D >> E;
        for0(i,3){
            if(arr[i]<=E){
                if (S-arr[i]<=D)
                {
                    cout<<"YES\n";
                    f=1;
                    break;
                }
            }
        }
        if (f!=1) cout << "NO\n";
    }
}