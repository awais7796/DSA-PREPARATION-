#include<bits/stdc++.h>
using namespace std;

// This is the parameterised method of recursion where u can "Print " the  desire value 
void Sum(int n,int sum){
    if(n<1) {
    cout<<"sum :"<<sum;
    return;}
Sum(n-1,sum+n);
}


main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    Sum(n,0);
}