#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int>ls;

    ls.push_back(2);
    ls.push_back(3);
    ls.push_back(5);
    ls.push_back(4);
    ls.push_back(3);
    ls.push_back(1);
    ls.push_back(6);
    ls.push_back(7);
    ls.push_back(3);
    ls.push_back(9);
    ls.push_back(8);
    ls.push_back(3);


    cout<<"List1 before remove the occurenece of specific element: ";
    for (auto i : ls) {
        cout<<i<<" ";
    }

    cout<<endl<<endl;



    ls.remove(3);

    cout<<"List after remove the occurence of specific elements: ";
    
    for (auto j : ls) {
        cout<<j<<" ";
    }

    
    return 0;
}