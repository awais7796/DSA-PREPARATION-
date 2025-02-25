#include <bits/stdc++.h>
using namespace std;
int main (){


    // for the numbers
    string s;
    cin>>s;
    // int arr[s];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }


    //pre computing 
    int hashh[26]={0};
    for(int i=0;i<s.size();i++){
        //it will give the indexof hahh arr and add 1 number of times it appears
        hashh[s[i]-'a']++;

    }
    //queiring 
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //fetching
        cout<<hashh[c-'a']<< endl;
    }
    return 0;
}