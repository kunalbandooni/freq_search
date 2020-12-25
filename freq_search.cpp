/*

Problem:- Finding frequency of a number.

Input:-
8
1 2 3 4 3 2 2 1 
2

Output:-
3

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    unordered_map<int,int> a;
    for(int i=0;i<n;i++){
        cin>>k;
        a[k]++;
    }
    int t;
    cin>>t;
    cout<<"Frequency of "<<t<<" is: "<<a[t];
    return 0;
}