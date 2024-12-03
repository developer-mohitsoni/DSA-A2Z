#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int>ls;

    ls.push_back(2);
    ls.push_back(5);
    ls.push_back(3);
    ls.push_back(4);
    ls.push_back(9);
    ls.push_back(1);
    ls.push_back(8);
    ls.push_back(6);
    ls.push_back(7);
    
    cout<<"List before sorting: ";
    for (auto i : ls) {
        cout<<i<<" ";
    }

    cout<<endl<<endl;

    // Sort() actually manipulate the original array
    ls.sort();

    cout<<"List after sorting: ";

    for (auto j : ls) {
        cout<<j<<" ";
    }
    
    return 0;
}