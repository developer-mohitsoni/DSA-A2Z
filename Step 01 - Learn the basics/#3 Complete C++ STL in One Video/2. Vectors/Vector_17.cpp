#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>v17;
    v17.push_back(10);
    v17.push_back(20);
    v17.push_back(30);
    v17.push_back(40);
    v17.push_back(50);

    // empty(); /*Checks whether the element is empty or not, 
    // if empty: True,0
    // else
    // False*/

    cout<<"If present all the elements inside vector:- "<<endl;

    if(v17.empty()){
        cout<<"Hello";
    }
    else{
        cout<<"Baad mai jaa";
    }

    cout<<endl<<endl;

    v17.clear();

    cout<<"After clear the all elements inside vector:- "<<endl;

    if(v17.empty()){
        cout<<"Hello";
    }
    else{
        cout<<"Baad mai jaa";
    }

    return 0;
}