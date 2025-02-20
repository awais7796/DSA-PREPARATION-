#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){

if(n<=1) return n;
int last=fibonacci(n-1);
int lastSec=fibonacci(n-2);
return last+lastSec;
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<fibonacci(n);
}