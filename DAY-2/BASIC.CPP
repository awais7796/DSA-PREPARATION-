#include<bits/stdc++.h>
using namespace std;
// -------------Pattern practice-----

/*
1) * * * *
   * * * *
   * * * *
   * * * *
void print1(int n){
    for(int i=0;i<n;i++){

        for(int j=0;j<n ;j++){
            cout <<"* ";
        }
        cout <<endl;
    }
}
*/
/*
2) * 
   * *
   * * *
   * * * *
   * * * *

void print2(int n){

    for(int i=0;i<n;i++){

	for(int j=0; j=n;j--){

		cout<<"* ";
	}
	cout<<endl;
 
    }
}*/
/*3)  1
      1 2
      1 2 3
      1 2 3 4

void print3(int n){
	for (int i=1;i<=n;i++){
		for (int j=1; j<=i;j++){
			cout << j << " ";;
		}
		cout<<endl;
	}
    }
*/

/*
4) 1
   2 2
   3 3 3
   4 4 4 4
   5 5 5 5 5
   
void print4(int n ){
    	for(int i=1;i<=n;i++){
		for(int j=1 ; j<=i ; j++){
			cout<<i<<" ";
		}
	cout<<endl;

	}
}
*/
/*
5) * * * *
   * * *
   * *
   * 

   void print5(int n){
   for(int i=0;i<n;i++){
    for(int j=1;j<n-i+1;j++){
        cout<<"* ";
    }
    cout<<endl;
   }
   } 
*/
/*
6) 1 2 3 4 
   1 2 3 
   1 2
   1
void print6(int n){
    	for(int i=0;i<=n;i++){
		    for(int j=1;j<n-i+1;j++){
			cout<< j <<" ";
		    }
		    cout <<endl;
	    }
    }
*/

int main(){
int n=3;
cin >>n;
print1(n);
print2(n);
print3(n);
print4(n);
print5(n);
print6(n);
}