#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v8;
    v8.push_back(4);
    v8.push_back(8);
    v8.push_back(12);
    v8.push_back(16);
    v8.push_back(20);

    cout<<v8.front();  /*Accessing the element at frist index i.e 4
    Output:- 4*/

    cout<<endl;

    cout<<v8.back(); /*Accessing the element at last index i.e 20
    Output:- 20*/

    return 0;
}