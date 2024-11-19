#include<bits/stdc++.h>
using namespace std;
void print(int i){
if(i<1)return ;
print(i-1);
cout<<i<<endl;
}
int main (){
int n;
cout <<"pls enter the number :";
cin>>n;
print (n);
}