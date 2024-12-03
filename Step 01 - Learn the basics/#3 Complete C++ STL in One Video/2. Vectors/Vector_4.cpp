#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v2(5,100); /*Containing 5 instance of 100
     i.e {100,100,100,100,100}; */

    for(int i=0; i<v2.size(); i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;

    vector<int> v3(5); /*Containing 5 instance of by default 0
     i.e {0,0,0,0,0}; */
    
    for(int i=0; i<v3.size(); i++){
        cout<<v3[i]<<" ";
    }
    cout<<endl;


    return 0;
}