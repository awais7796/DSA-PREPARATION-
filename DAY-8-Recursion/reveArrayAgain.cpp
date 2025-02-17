#include<bits/stdc++.h>
using namespace std;

// void reverseArray(int l,int arr[],int r){
//     if(l>=r) return;
//     swap(arr[l],arr[r]);
//     reverseArray(l+1,arr,r-1);
//     }
/**
 reverse an array with the only one parameter and with n-i-1 
  **/
void reverseArray(int i, int arr[], int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    reverseArray(i+1,arr,n);
}

int main (){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverseArray(0,arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}