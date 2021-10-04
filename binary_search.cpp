#include <iostream>
using namespace std;
int binarysearch(int[], int, int);
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarysearch(arr, n, key);
    return 0;
}
int binarysearch(int arr[], int n, int key){
    int s=0, e=n;
    
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
