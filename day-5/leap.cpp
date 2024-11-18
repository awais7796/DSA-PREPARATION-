#include<bits/stdc++.h>
using namespace std;
int main(){
int year=2016;
if(year%4==0){
    cout<<year<<" is a leap year";
}else if(year%400==0 && year/100==0){
cout<<year<<" is the leap year";
}else{
    cout<<year<<"    not a leap year";
}



    return 0;
}