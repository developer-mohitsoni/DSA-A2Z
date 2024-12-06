#include<bits/stdc++.h>
using namespace std;

long long sumFirstN(long long n){
    return n*(n+1)/2;
}
int main(){
    long long n;

    cout<<"Enter The Number:- "<<endl;
    cin>>n;

    cout<<"Sum of First N Numbers are:- ";

    long long solve = sumFirstN(n);

    cout<<solve;

    return 0;
}