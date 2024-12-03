#include<bits/stdc++.h>
using namespace std;

void printName(int i, int num, string str){
    // jaise hi mera i ki value num se badi hogi toh ye function terminate ho jaayega

    // base case
    if(i > num) return;

    cout<<str<<endl;

    // NOTE:- use always '++i' rather than 'i++' because when we do 'i++' it's variable i assign the value first then incremented but in this case increment never achieve.

    // So use '++i' it's first increment then store varibale in i.
    printName(++i,num,str);
}

// T.C is O(N)
// S.C is O(N) till achieve it's base case 



int main(){
    int n;

    cout<<"Enter Number of Iterations: "<<endl;
    cin>>n;

    string s;

    cout<<"Enter The String that you want to print: "<<endl;
    cin>>s;

    cout<<endl;

    cout<<"Recursion Start: "<<endl;

    printName(1,n,s);

    return 0;
}