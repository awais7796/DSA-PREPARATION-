#include<bits/stdc++.h>
using namespace std;
int main(){
//    prime number are divide by 1 or by themself
// conditions:if its divisor are more than 2 and  0 and 1 is not the prime number 
int num1=777;
int count=0;
for(int i=1;i< num1+1;i++){
if (num1%i==0){
count+=1;
}
}
if(num1 ==0||num1==1){
    cout<<num1<<" is not a prime number";
}else if(count>2)
    cout<<num1<<" is not a prime number";
else{
    cout<<num1<<" is a prime number";
}




    return 0;
}