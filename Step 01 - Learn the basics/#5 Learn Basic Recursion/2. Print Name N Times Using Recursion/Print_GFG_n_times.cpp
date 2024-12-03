#include<bits/stdc++.h>
using namespace std;

void printGfg(int x){
    // base case
    if(x==0) return;

    // rest case will handle recursion
    printGfg(x-1);

    // 1 case solve own
    cout<<"GFG"<<" ";
}
int main(){
    int n;

    cout<<"Enter The Number:- "<<endl;
    cin>>n;

    printGfg(n);

    return 0;
}