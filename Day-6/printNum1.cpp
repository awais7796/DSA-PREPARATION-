#include<bits/stdc++.h>
using namespace std;
int cnt=1;
void Numbr(int n){
if(cnt==n) return;
cout<<cnt<<endl;
cnt++;
Numbr(n);

}


int main (){
    int n;
    cout<<"pls enter the number";
    cin>>n;
    Numbr(n);
    }