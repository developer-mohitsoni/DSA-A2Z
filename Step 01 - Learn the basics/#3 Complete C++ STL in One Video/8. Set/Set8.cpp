#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>st;

    for(int i=1; i<=10; i++){
        st.insert(i * 10);
    }
    cout<<endl;

    set<int>::iterator itLowerB, itUpperB;

    itLowerB = st.lower_bound(30);
    itUpperB = st.upper_bound(60);

    st.erase(itLowerB, itUpperB);

    cout<<"Set Contains: "<<endl;

    for(auto it : st){
        cout<<it<<" ";
    }
    cout<<endl;

    return 0;
}