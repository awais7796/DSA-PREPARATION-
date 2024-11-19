#include<bits/stdc++.h>
using namespace std;
    int cnt=0;
void printName(string name){
    if(cnt==5) return;
    cout<<name<<endl;
    cnt++;
    printName(name);
}
void printName2(int i, int n){
    if(i>=n) return ;
    cout<<"hello World!"<<endl;
    printName2(i+1,n);
}


int main (){
    int n;
    cout<<"pls enter number: ";
    cin>>n;
    printName2(0,n);
string name;
cout<<"please enter your name : ";
cin>>name;
printName(name);
}
