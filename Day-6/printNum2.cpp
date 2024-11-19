#include<bits/stdc++.h>
using namespace std;
void Num(int n){
if (n==0)return;
cout<<n<<endl;
n--;
Num(n);
}
int main (){
    int n;
// int cnt= n ;
    cout<<"please enter the number";
    cin>>n;
    Num(n);
}