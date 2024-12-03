#include<bits/stdc++.h>
using namespace std;

int main(){

    // Insert function:-
    vector<int>v12(2,100); /*{100,100}*/

    v12.insert(v12.begin(),300); /*{300,100,100}*/

    vector<int>::iterator it = v12.begin();

    for(int i=0; i<v12.size(); i++){
        cout<<*(it+i)<<" ";
    }

    cout<<endl;

    // Insert the 5 in vector v12 at index (1)
    v12.insert(v12.begin() + 1, 5); /*{300,5,100,100}*/

    for(auto it : v12){
        cout<<it<<" ";
    }
    cout<<endl;

    // Insert the 10, 2*times in vector v12 at index (2)
    v12.insert(v12.begin() + 2, 2, 10); /*{300,5,10,10,100,100}*/

    for(auto it2 : v12){
        cout<<it2<<" ";
    }
    cout<<endl;

    // Insert the 12 in vector v12 at end
    v12.insert(v12.end(), 12); /*{300,5,10,10,100,100,12}*/

    for(auto it3 : v12){
        cout<<it3<<" ";
    }
    cout<<endl;

    // Insert the 90, 2*times in vector v12 at last
    v12.insert(v12.end(), 2, 90); /*{300,5,10,10,100,100,12,90,90}*/

    for(auto it4 : v12){
        cout<<it4<<" ";
    }
    cout<<endl;


    vector<int>copy(2,30); /*{30,30}*/

    // Insert the copy vector in v12 at starting position of v12 vector...
    v12.insert(v12.begin(), copy.begin(), copy.end()); /*{30,30,300,5,10,10,100,100,12,90,90}*/


    for(auto it5 : v12){
        cout<<it5<<" ";
    }
    cout<<endl;

    
    return 0;
}