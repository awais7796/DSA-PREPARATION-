#include<bits/stdc++.h>
using namespace std;
/*
11) 1 
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1


*/
void print11(int n){
    int start=1 ;
for (int i=0 ;i<n;i++){
if (i%2==0){
    start=1;
}else{start=0;}
for (int j=0; j<=i;j++){
    cout <<start<<" ";
    start=1- start ;
}
cout<<endl;

}
}

/*
12)  1             1
     1 2         2 1 
     1 2 3     3 2 1 
     1 2 3 4 4 3 2 1 


*/
void print12(int n ){
    int space =2*(n-1);
for (int i=1;i<=n;i++){
// left side number 
for (int j=1;j<=i;j++){
cout<<j<<" ";
}
// space 
for(int j=0;j<space;j++){
    cout<<" ";
}


// right side numbers 
for (int j=i;j>=1;j--){
cout<<j<<" ";
}
cout<<endl;
// as space is reducing by 2
space=space-2;


}




}

/* 13) 1
       2 3
       4 5 6 
       7 8 9 10
       11 12 13 14 15 

*/
void print13(int n){
int num=1;
    for (int i=1;i<=n;i++){
for (int j=1;j<=i;j++){
cout<<num<<" ";
num++;
}
cout<<endl;
}
}

/* 14)  A
        A B
        A B C
        A B C D
        A B C D E 
*/
void print14(int n){

for (int i=0; i<n;i++){

    for (char ch='A';ch<='A'+i;ch++){
    cout <<ch<<"";
}
cout<<endl;


}}

/*
15)  A B C D E 
     A B C D
     A B C 
     A B 
     A  

*/
void print15(int n){

for (int i=0;i<n;i++){
 for (char ch='A';ch<='A'+(n-i-1);ch++){
    cout<<ch;
 }
 cout<<endl;
}




}


int main(){
    // int t;
    // cin>>t;
    // for(int i=0;i<t;i++){

    // }
    int n=3;
    // cin>>n;
    // print11(n);
    // print12(n);
    // print13(n);
    print14(n);
    // print15(n);

    return 0;
}