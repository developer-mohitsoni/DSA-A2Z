#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int> ls(5,100); /*Containing 5 instance of 100
     i.e {100,100,100,100,100}; */

    for(int element : ls){
        cout<<element<<" ";
    }
    cout<<endl;

    list<int> ls2(5); /*Containing 5 instance of by default 0
     i.e {0,0,0,0,0}; */
    
    for(int element2 : ls2){
        cout<<element2<<" ";
    }
    cout<<endl;


    return 0;
}