#include<bits/stdc++.h>
using namespace std;

// Solve using Two Pointer Way (Taking Original String)
bool isPalindrome(string& str) {

    int n = str.size();
    int i=0;
    int j = n-1;

    while(i<=j){
        if(str[i] != str[j]) return false;

        i++;
        j--;
    }
    return true;
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