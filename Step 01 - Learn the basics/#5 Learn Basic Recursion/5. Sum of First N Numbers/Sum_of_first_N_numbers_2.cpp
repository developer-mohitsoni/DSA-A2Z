#include<bits/stdc++.h>
using namespace std;

long long sumFirstN(long long n){
    // if(n == 0) return 0;
    if(n <= 1) return n;

    return n + sumFirstN(n-1);
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