#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int>ls1;

    ls1.push_back(4);
    ls1.push_back(1);
    ls1.push_back(3);
    ls1.push_back(5);
    ls1.push_back(2);

    list<int>ls2;

    ls2.push_back(9);
    ls2.push_back(6);
    ls2.push_back(8);
    ls2.push_back(10);
    ls2.push_back(7);


    
    ls1.sort();


    cout<<"List1 after Sorted: ";
    for (auto i : ls1) {
        cout<<i<<" ";
    }

    cout<<endl<<endl;



    ls2.sort();

    cout<<"List2 after Sorted: ";
    for (auto j : ls2) {
        cout<<j<<" ";
    }

    cout<<endl<<endl;


    ls1.merge(ls2);

    cout<<"Merge List1 and List2: ";

    for (auto k : ls1) {
        cout<<k<<" ";
    }
    
    return 0;
}