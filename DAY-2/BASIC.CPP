#include<bits/stdc++.h>
using namespace std;
// -------------Pattern practice-----

/*
1) * * * *
   * * * *
   * * * *
   * * * *
*/
void print1(int n){
    for(int i=0;i<n;i++){

        for(int j=0;j<n ;j++){
            cout <<"* ";
        }
        cout <<endl;
    }
}
/*
2) * 
   * *
   * * *
   * * * *
   * * * *

}*/
void print2(int n){

    for(int i=0;i<n;i++){

	for(int j=0; j=n;j--){

		cout<<"* ";
	}
	cout<<endl;
 
    }}
/*3)  1
      1 2
      1 2 3
      1 2 3 4

*/
void print3(int n){
	for (int i=1;i<=n;i++){
		for (int j=1; j<=i;j++){
			cout << j << " ";;
		}
		cout<<endl;
	}
    }

/*
4) 1
   2 2
   3 3 3
   4 4 4 4
   5 5 5 5 5
*/
   
void print4(int n ){
    	for(int i=1;i<=n;i++){
		for(int j=1 ; j<=i ; j++){
			cout<<i<<" ";
		}
	cout<<endl;

	}
}
/*
5) * * * *
   * * *
   * *
   * 

*/
   void print5(int n){
   for(int i=0;i<n;i++){
    for(int j=1;j<n-i+1;j++){
        cout<<"* ";
    }
    cout<<endl;
   }
   } 
/*
6) 1 2 3 4 
   1 2 3 
   1 2
   1
*/
void print6(int n){
    	for(int i=0;i<=n;i++){
		    for(int j=1;j<n-i+1;j++){
			cout<< j <<" ";
		    }
		    cout <<endl;
	    }
    }
/*
7)      *
       * *
     * * * *
   * * * * * *

*/
void print7(int n){
 
//    row
for(int i=0;i<n;i++){

// space 
    for (int j=0;j<n-i-1;j++)
    {
    cout<<" ";
    }
// star 
    for(int j=0;j<2*i+1;j++){
    cout<<"*";
    }   
// space 
    for (int j=0;j<n-i-1;j++)
    {
    cout<<" ";
    }

cout<<endl;
}
}

/*
8) ********
    ******
     ***
      *
      

}*/
void print8(int n){

    for(int i=0;i<n;i++){

// space 
    for(int j=0;j<i;j++){
    cout<<" ";
    }

// star 
    for(int j=0;j<2*n-(2*i+1);j++){
    cout<<"*";
    }


// space 
    for(int j=0;j<i;j++){
    cout<<" ";
    }


cout<<endl;
}}

/*
9)           *
           * * *
         * * * * *
           * * *
             *
combine P7 and P8
}*/
void print9(int n){
for(int i=0;i<n;i++){
// space
for(int j=0;j<n-i-1;j++){
    cout<<" ";
}
for(int j=0;j<2*i+1;j++){
    cout<<"*";
}

for(int j=0;j<n-i-1;j++){
    cout<<" ";
}

cout<<endl;

// -----------upper triangle-----------
}


for(int i=0;i<n;i++){
// space
for(int j=0;j<i;j++){
    cout<<" ";
}
for(int j=0;j<2*n-(2*i+1);j++){
    cout<<"*";
}

for(int j=0;j<i;j++){
    cout<<" ";
}

cout<<endl;

}}

/*
10)*
   * *
   * * *
   * * * *
   * * *
   * *
   * 
*/
void print10(int n){
// -> this approach is by combining the P2 And P5


for(int i=0;i<n;i++){
 for(int j=0;j<i;j++){
     cout<<"*";
 }

cout<<endl;
}
for(int i=1;i<=n;i++){
 for(int j=0;j<n-i+1;j++){
     cout<<"*";
 }

cout<<endl;
}}










int main(){
int n=5;
// cin >>n;
print1(n);
print2(n);
print3(n);
print4(n);
print5(n);
print6(n);
print7(n);
print8(n);
print9(n);
print10(n);


}