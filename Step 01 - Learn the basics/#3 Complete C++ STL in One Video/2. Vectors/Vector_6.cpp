#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v5;
    v5.push_back(1);
    v5.push_back(2);
    v5.push_back(3);
    v5.push_back(4);
    v5.push_back(5);
    // How to access the vector

    // Using below this:- 
    cout<<v5.at(2); /*Accessing 3rd element*/

    cout<<endl;
    
    cout<<v5[2]; /*Accessing 3rd element*/

    return 0;
}