#include<bits/stdc++.h>
using namespace std;

int main(){
    // Copy Vector:- 
    vector<int> v4(5,20); /*Containing 5 instance of 20
     i.e {20,20,20,20,20}; */


    vector<int> v5(v4); /*Copy the above container into another vector*/

    for(int i=0; i<v5.size(); i++){
        cout<<v5[i]<<" ";
    }
    cout<<endl;

    return 0;
}