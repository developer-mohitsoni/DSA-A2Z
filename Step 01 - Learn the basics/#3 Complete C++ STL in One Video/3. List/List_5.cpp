#include<bits/stdc++.h>
using namespace std;

int main(){
    // Copy Vector:- 
    list<int> ls(5,20); /*Containing 5 instance of 20
     i.e {20,20,20,20,20}; */


    list<int> ls2(ls); /*Copy the above container into another list*/

    for(int element : ls2){
        cout<<element<<" ";
    }
    cout<<endl;
    
    return 0;
}