#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if (n<1){
        return 1;
    }
    return n*fact(n-1);
}

int  main (){
    int n;
    cout<<"enter rthe number ;";
    cin>>n;
    cout<<"factorial of "<<n<<" is : "<<fact(n);
}