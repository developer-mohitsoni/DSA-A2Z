#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cout<<"Enter The Number:- "<<endl;
    cin>>n;

    int temp = n;

    int count = 0;

    while(temp > 0){
        count++;

        temp = temp / 10;
    }

    cout<<"Total Digits in a Number are:- "<<count<<endl;

    // T.C is O(log10(N)) , number of times divisible by 10 that's why i take "log10".

    // NOTE:- IF number of iterations is divisible then it's T.C lies in "logarithmic" T.C

    return 0;
}