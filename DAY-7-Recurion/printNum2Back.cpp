#include<bits/stdc++.h>
using namespace std;
// void print(int i,int n){
//     if(i<1)return;
//     print(i-1,n);
//     cout<<i<<endl;
// }
void print(int i,int n){
    if(i>n)return;
    print(i+1,n);
    cout<<i<<endl;
}
int main (){
    int n;
    cout <<"pls enter the number : ";
    cin>>n;
    print(1,n);
}


// print name from n to 1 by backtracking 

// last function will print first with only one input in liner manner as well 