#include<bits/stdc++.h>
using namespace std;

void explainList(){

    list<int>ls;

    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2,4}

    for(int element: ls){
        cout<<element<<" ";
    }
    cout<<endl<<endl;

    list<int>ls2;
    ls2.push_back(3); // {3}
    ls2.emplace_back(6); // {3,6}

    ls2.push_front(8); // {8,3,6}
    ls2.emplace_front(0); // {0,8,3,6}

    for(int element: ls2){
        cout<<element<<" ";
    }
    cout<<endl;

    //rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}
int main(){
    explainList();

    return 0;
}