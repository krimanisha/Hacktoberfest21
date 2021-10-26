#include<iostream>
using namespace std;


void mergeSort(int A[],  int s, int l){
    if(s=l){

    }
    
}

int main(){
    int A[] = {3,12,44,2,56,3}
    int size = sizeof(A)/sizeof(int);
    int s = 0, l = size;
    mergeSort(A[], s, l);

    // Print the sorted array to

    for(int i = 0; i < size; i++ ){
        cout << A[i] << " ";
    }
    return 0;
}