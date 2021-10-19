 #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    const ll MOD=1000000007;
    ll dp[100000+1];
    void tribonaci(){
    	dp[1]=0;
    	dp[2]=0;
    	dp[3]=1;
    	for(int i=4;i<=100000;i++){
    		dp[i]=(dp[i-1]%MOD+dp[i-2]%MOD+dp[i-3]%MOD)%MOD;
    	}
    }
     
    int main() {
    	memset(dp,0,sizeof(dp));
    	tribonaci();
    	ll n;
    	while(cin>>n){
    		cout<<dp[n]<<endl;
    	}
    }