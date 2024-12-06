#include<bits/stdc++.h>
using namespace std;

// Parameterized Way Recursion  (No need for Returning but not good approach)
void sumFirstN(int n, int sum){
    if(n < 1){
        cout<<sum;
        return;
    }
    sumFirstN(n-1, sum+n);
}
int main(){
    int n;

    cout<<"Enter The Number:- "<<endl;
    cin>>n;

    cout<<"Sum of First N Numbers are:- ";

    sumFirstN(n,0);

    return 0;
}