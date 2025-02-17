#include<bits/stdc++.h>
using namespace std;

void reverseArray(int l,int num1[6],int r){
if(l>=r) return;
swap(num1[l],num1[r]);
reverseArray(l+1,num1,r-1);
}
int main (){
    int num1[6]={1,3,45,6,7};
    int n=6;
    // cout<<" enter the array elemnt";
    // cin>> num1[6];
    cout<<reverseArray(0,num1,n-1);
}

// have some problem ifine loop and compiling is going on 