#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>st;

    st.insert(75);
    st.emplace(23);
    st.insert(65);
    st.insert(75);
    st.insert(42);
    st.insert(13);

    cout<<"Set Contains: ";

    while(!st.empty()){
        cout<<*st.begin()<<" ";
        st.erase(st.begin());
    }

    return 0;
}