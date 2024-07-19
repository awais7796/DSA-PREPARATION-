#include <bits/stdc++.h>
using namespace std;
/*
int sum(int num1,int num2){
int sum=num1+num2;
return sum;
}
*/

int main()
{

/*
******************NOTES********************************
1) TIP:->instead of using <iostream> use <bits/stdc++.h> it include the all the library of c++.
2) "\n" and "endl" used for the next line.
3) DATATYPES :-int, long,long long, float ,double,boolean, char, string , getline.


*/
    //    cout<<"hello world";

    // ----------------Conditional Statment-----------
    // ***************if statement**********

    // Write  a program that takes an input of age and prints if u are an adult or not
    //code is below:-
    // int age;
    // // cin >> age;
    // if (age >= 18)
    // {
    //     cout << "You are and adult";
    // }
    // else
    // {
    //     cout << " you are an under age person";
    // }

 /*prob no.2:-
 A School has following rules for grading system;
 a. below 25- F
 b. 25 to 44- E
 c. 45 to 49 - D
 d.  50 to 59 -C
 e. 60 to 79 - B 
 f. 80 to 100 -A
 ask user to enter marks and then prints the corresponding grade.
 */
// code  is below:-
/*
int marks;
 cin>>marks;
if (marks<25){
    cout<<"your grade is F";
}else if(marks>=25&&marks<=44){
    cout<<"your grade is E";
}else if(marks>=45&&marks<=49){
    cout<<"your grade is D";
}else if(marks>=50&&marks<=59){
    cout<<"your grade is C";
}else if(marks>=60&&marks<=79){
    cout<<"your grade is B";
} else if (marks>=80&&marks<=100){
    cout<<"your grade is A";
}else{
    cout<<"Please enter the marks ranging from 1 to 100 ";
}*/

/*
Take the age from the user and then decide accordingly 
1. if age <18 
print not eligible for job
2. if age >=18 and age <=54 
print eligle for job
3. if age >=55 and age <=57 
print eligible for job, but retirement soon 
4. if age >57 
print retirement time 

code for probl


int age;
cin>>age;
if(age <18){
    cout<<"not eligible for job";
}else if (age >=18&& age <=54) {
cout<<"not eligible for job";
}
else if (age >=55&& age <=57) {
cout<<"eligible for job, but retirement soon ";
}
else if (age >=57) {
cout<<"retiremnet time ";
}*/

// -----------switch------------
/*
Take the Day number ANd prints the corresponding day 
code ->
int day;
cin >>day;
switch (day)
{
case 1 : cout<<"Monday ";
    break;
case 2 : cout<<"Tuesday ";
    break;
case 3 : cout<<"Wednesday ";
    break;
case 4 : cout<<"Thursday ";
    break;
case 5 : cout<<"Friday ";
    break;
case 6 : cout<<"Saturday ";
    break;
case 7 : cout<<"Sunday ";
    break;

default:cout<<"please provide the valid number ";
    break;
}*/

// -----Function-----
/*
take two no and add them 
code->
int num1,num2;
cin>>num1>>num2;
int res=sum(num1,num2);
cout<<res;
*/






    return 0;
}