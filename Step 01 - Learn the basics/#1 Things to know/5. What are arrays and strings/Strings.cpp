#include<bits/stdc++.h>

using namespace std;

int main(){
    string s = "Mohit";

    // NOTE:- Every character store inside string is in index form

    cout<<s[0]<<endl;
    cout<<s[1]<<endl;
    cout<<s[2]<<endl;
    cout<<s[3]<<endl;
    cout<<s[4]<<endl;

    // Find out the Length of the string:

    cout<<"Length of the string is: "<<s.size()<<endl;

    // To accessing the last character in a string i.e:-

    cout<<"Last element of a string is: "<<s[s.size()-1]<<endl;

    // Change the last and second last character in a string:

    s[s.size()-1] = 'n'; /*modify last character*/
    s[s.size()-2] = 'a'; /*modify second last character*/

    cout<<s;

    return 0;
}