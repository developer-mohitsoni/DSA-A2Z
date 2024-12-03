#include<bits/stdc++.h>
using namespace std;

int main(){

    // Deletion in a vector:-

    vector<int>v10;

    v10.push_back(10);
    v10.push_back(20);
    v10.push_back(12);
    v10.push_back(23);

    // Using erase() function:-
    // Syntax:- v10.erase(iterator position)
    // Example:- v10.erase(v10.begin()+1) /*This will erase the element at index 1 i.e 20*/

    v10.erase(v10.begin() + 1); /*{10,12,23}*/

    for(auto it : v10){
        cout<<it<<" ";
    }
    
    cout<<endl;


    vector<int>v11;

    v11.push_back(10);
    v11.push_back(20);
    v11.push_back(12);
    v11.push_back(23);
    v11.push_back(35);


    // Using erase() function:-
    // Syntax:- v11.erase(iterator first, iterator last)
    // here last iterator will move to las+1 i.e next to the deleting last element. i.e start includng but end not including...
    // Example:- v11.erase(v11.begin()+2, v11.begin()+4) /*This will erase the element at index 2 and 3 i.e 12 and 23*/
    
    v11.erase(v11.begin()+2, v11.begin()+4); /*{10,20,35}*/

    for(auto it2 : v11){
        cout<<it2<<" ";
    }

    return 0;
}