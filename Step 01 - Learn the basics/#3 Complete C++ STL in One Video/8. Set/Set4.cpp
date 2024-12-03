#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>st1;

    st1.insert(75);
    st1.emplace(23);
    st1.insert(65);
    st1.insert(42);
    st1.insert(13);

    set<int>st2;

    st2.insert(2);
    st2.insert(5);
    st2.insert(3);
    st2.insert(1);
    st2.insert(4);

    st1.swap(st2);

    cout<<"Now, After Swap First Set Contains: "<<endl;

    for(auto it : st1){
        cout<<it<<" ";
    }
    cout<<endl;


    cout<<"And Second Set Contains: "<<endl;

    for(auto it : st2){
        cout<<it<<" ";
    }


    return 0;
}