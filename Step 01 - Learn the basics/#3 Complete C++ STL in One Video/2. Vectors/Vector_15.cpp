#include<bits/stdc++.h>
using namespace std;

void afterSwapp(vector<int>&v){

    for(auto it : v){
        cout<<it<<" ";
    }
    
    cout<<endl;
}
int main(){

    vector<int>v14;
    v14.push_back(9);
    v14.push_back(18);
    v14.push_back(27);
    v14.push_back(36);
    v14.push_back(45);

    cout<<"Before swapping v14 is: "<<endl;

    for(auto it : v14){
        cout<<it<<" ";
    }

    cout<<endl;

    vector<int>v15;
    v15.push_back(10);
    v15.push_back(20);
    v15.push_back(30);
    v15.push_back(40);
    v15.push_back(50);

    cout<<"Before swapping v15 is: "<<endl;
    for(auto it2 : v15){
        cout<<it2<<" ";
    }

    cout<<endl<<endl;


    v14.swap(v15); /*v14-> {10,20,30,40,50} , v15-> {9,18,27,36,45}*/

    cout<<"After swapping v14 is: "<<endl;

    afterSwapp(v14);

    cout<<"After swapping v15 is: "<<endl;

    afterSwapp(v15);

    return 0;
}