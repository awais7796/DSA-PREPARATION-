#include <bits/stdc++.h>
using namespace std;
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
    int age;
    // cin >> age;
    if (age >= 18)
    {
        cout << "You are and adult";
    }
    else
    {
        cout << " you are an under age person";
    }

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

int marks =122;
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
}else if (marks>=80&&marks<=100){
    cout<<"your grade is A";
}else{
    cout<<"Please enter the marks ranging from 1 to 100 ";
}

    return 0;
}