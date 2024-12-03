#include<bits/stdc++.h>
using namespace std;

int main(){


    vector<int> v7;
    v7.push_back(3);
    v7.push_back(6);
    v7.push_back(9);
    v7.push_back(12);
    v7.push_back(15);

    /*This iterator act as a pointer to store the address of the memory of next to the last element which is garbage
    
    So, to store the memory address of the exact last element we have to subtract -1 from v7.end() i.e  v7.end()-1 */
    vector<int>::iterator it2=v7.end()-1; 

    cout<<*(it2)<<endl; /*When we dereference this will gives the last element of the vector */ /*Output:- 15*/

    for(int i=0; i<v7.size(); i++){
        cout<<*(it2-i)<<" ";
    }
    /*Output:- 15 12 9 6 3*/

    cout<<endl;

    it2--; /*When we decrease the address of the memeory it will point to the previous memory location the vector*/

    cout<<*(it2)<<endl; /*Output:- 12*/

    // Similary as v.end() there is some another two:-

    // vector<int>::iterator it3 = v.rend(); /*reverse end (NOTE:- Never used)*/
    // vector<int>::iterator it4 = v.rbegin(); /*reverse begin (NOTE:- Never used)*/

    return 0;
}