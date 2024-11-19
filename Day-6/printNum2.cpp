#include<bits/stdc++.h>
using namespace std;

void Num(int n){
if (n==0)return;
cout<<n<<endl;
n--;
Num(n);
}
void printName2(int n, int i){
    if(i==n) return ;
    cout<<n<<endl;
    printName2(n-1,i);
} 

int main (){
    int n;
// int cnt= n ;
    cout<<"please enter the number : ";
    cin>>n;
    // Num(n);
    printName2(n,0);
}