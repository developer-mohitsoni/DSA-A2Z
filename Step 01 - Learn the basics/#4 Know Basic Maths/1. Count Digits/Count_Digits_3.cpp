#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cout<<"Enter The Number:- "<<endl;
    cin>>n;

    int temp = n;

    string s = to_string(temp);

    int len = s.size();

    cout<<"Total Digits in a Number are:- "<<len<<endl;

    return 0;
}