#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>st;

    st.insert(75);
    st.emplace(23);
    st.insert(65);
    st.insert(42);
    st.insert(13);

    cout<<"Size Before Clearing All the Set Elmenents: "<<st.size()<<endl;

    st.clear();

    cout<<"Size After Clearing All the Set Elmenents: "<<st.size()<<endl;


    return 0;
}