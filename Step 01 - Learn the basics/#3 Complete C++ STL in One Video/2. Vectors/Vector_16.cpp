#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>v16;
    v16.push_back(9);
    v16.push_back(18);
    v16.push_back(27);
    v16.push_back(36);
    v16.push_back(45);

    cout<<"Before Clear The Vector, Size is:- "<<endl;

    cout<<v16.size(); /*Output:- 5*/

    cout<<endl;

    v16.clear(); /*Clear the entire vector*/


    cout<<"After Clear The Vector, Size is:- "<<endl;

    cout<<v16.size(); /*Output:- 0*/

    return 0;
}