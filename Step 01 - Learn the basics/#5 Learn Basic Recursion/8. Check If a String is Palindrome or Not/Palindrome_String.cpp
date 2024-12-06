#include<bits/stdc++.h>
using namespace std;

// Solve using Two Pointer Way (Taking Copy of String)
int isPalindrome(string S) {

    int n = S.size();
    int i=0;
    int j = n-1;

    while(i<=j){
        if(S[i] != S[j]) return 0;

        i++;
        j--;
    }
    return 1;
}
int main(){
    string s;

    cout<<"Enter The String"<<endl;
    // getline(cin,s);
    cin>>s;

    bool ans = isPalindrome(s);

    if(ans) cout<<"String is Palindrome"<<endl;
    else cout<<"String is not Palindrome"<<endl;

    return 0;
}