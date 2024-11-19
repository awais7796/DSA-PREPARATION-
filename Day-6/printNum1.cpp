#include<bits/stdc++.h>
using namespace std;
int cnt=1;
void Numbr(int n){
if(cnt==n) return;
cout<<cnt<<endl;
cnt++;
Numbr(n);

}
void printName2(int i, int n){
    if(i>n) return ;
    cout<<i<<endl;
    printName2(i+1,n);
}


int main (){
    int n;
    cout<<"pls enter the number";
    cin>>n;
    Numbr(n);
    printName2(1,n);
    }