#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>st;

    st.insert(75);
    st.emplace(23);
    st.insert(65);
    st.insert(23);
    st.insert(42);
    st.insert(13);

    set<int>::iterator it;

    it = st.find(23);
    st.erase(it); // {75,65,42,13}

    st.erase(st.find(42)); // {75,65,13}

    cout<<"Now Set Contains the Elements are: "<<endl;

    for(it = st.begin(); it != st.end(); it++){
        cout<<*it<<" "; 
    }

    // Output:- {13,65,75}
    
    cout<<endl;

    return 0;
}