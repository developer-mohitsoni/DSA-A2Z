// The code snippet checks whether a given string is a palindrome or not using recursion. It compares characters from the beginning and end of the string, and if they are not equal, it returns false. If all characters are compared and found to be equal,
#include<bits/stdc++.h>
using namespace std;

// Solve using Recursion (Taking Original String)
int checkPalindrome(string &s,int i, int n){
    if(i>=n/2) return 1;

    if(s[i] != s[n-i-1]) return 0;

    return checkPalindrome(s, i+1, n);

}
bool isPalindrome(string S) {
    // Write your code here.
    int n =  S.size();

    return checkPalindrome(S,0,n);
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