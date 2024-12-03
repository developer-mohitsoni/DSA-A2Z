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

    for(auto it = st.begin(); it != st.end(); it++){
        cout<<*it<<" ";
    }

    return 0;
}