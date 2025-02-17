#include<bits/stdc++.h>
using namespace std;
int Sum(int n)
{
if (n==0){
    return 0;
}
return n+Sum(n-1);
}
main()
{
int n;
    cout<<"enter the number : ";
    cin>>n;
    cout<<"Sum: "<<Sum(n);
}