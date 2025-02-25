#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    // cout<<"enter number lenght";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        // cout<<"enter numbers"<<i;
        cin>>arr[i];
    }
// initialize hash 
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
// q is the number of quiery
    int q;
    cin>>q;
    while(q--){
        // number is the query 
        int number;
        // cout<<"enter the queiry numbers ";
        cin>>number;
        cout<<hash[number]<<endl;
    }
    return 0;
}