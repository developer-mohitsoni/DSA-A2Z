#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int>ls;

    ls.push_back(2); // {2}

    ls.emplace_back(4); // {2,4}

    for(int element : ls){
        cout<<element<<" ";
    }
    cout<<endl;

    return 0;
}