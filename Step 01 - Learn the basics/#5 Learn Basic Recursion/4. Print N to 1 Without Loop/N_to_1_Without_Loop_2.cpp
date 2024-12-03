#include<bits/stdc++.h>
using namespace std;

void printNos(int N){
    // base case
    if(N==0) return;

    // 1 case solve own
    cout<<N<<" ";

    // rest case will handle recursion
    printNos(N-1);
}
int main(){
    int n;

    cout<<"Enter The Number:- "<<endl;
    cin>>n;

    printNos(n);

    return 0;
}