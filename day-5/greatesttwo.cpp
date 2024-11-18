#include<bits/stdc++.h>
using namespace std;
int main(){
int num1=5;
int num2=119;
int num3=89;
if((num1>num2)&&(num1>num3)){
    cout<<num1;
}
else if((num2>num1)&&(num2>num3)){
    cout<<num2;
}
else{
    cout<<num3;
}


// num1>num2 ? cout<<num1 : cout<< num2;
    return 0;
}