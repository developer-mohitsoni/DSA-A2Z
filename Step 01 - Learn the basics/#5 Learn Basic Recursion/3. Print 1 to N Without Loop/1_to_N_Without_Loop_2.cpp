#include<bits/stdc++.h>
using namespace std;

void printNos(int x){
    // base case
    if(x==0) return;

    // rest case will handle recursion
    printNos(x-1);

    // 1 case solve own (Backtracking)
    cout<<x<<" ";
}
int main(){
    int n;

    cout<<"Enter The Number:- "<<endl;
    cin>>n;

    printNos(n);

    return 0;
}