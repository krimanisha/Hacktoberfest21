#include<bits/stdc++.h>
using namespace std;
#define ll long long


void merge(ll a[],ll start,ll mid,ll end){
	ll sa=mid-start+1,sb=end-mid;
	ll left[sa],right[sb];
	ll j=0;
	for(ll i=start;i<=mid;i++){
		left[j]=a[i];
		j++;
	}
	j=0;
	for(ll i=mid+1;i<=end;i++){
		right[j]=a[i];
		j++;
	}
	ll i=0,k=start;
	j=0;
	while(i<sa && j<sb && k<=end){
		if(left[i]<=right[j]){
			a[k]=left[i];
			k++;
			i++;
		}else{
			a[k]=right[j];
			k++;
			j++;
		}
	}
	while(i<sa && k<=end){
		a[k]=left[i];
		k++;
		i++;
	}
	while(j<sb && k<=end){
		a[k]=right[j];
		k++;
		j++;
	}
	
}



void mergesort(ll a[],ll start,ll end){
	if(start>=end){
		return;
	}
	ll mid=start+((end-start)/2);
	mergesort(a,start,mid);
	mergesort(a,mid+1,end);
	merge(a,start,mid,end);
}

int main()
{
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++){
			cin>>a[i];
		}
		
		mergesort(a,0,n-1);
		
		for(ll i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
