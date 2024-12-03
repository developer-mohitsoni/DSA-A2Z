#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int,int>>vec;

    vec.push_back({1,2}); /*0th index */ /*push_back, need curly braces {} to shows as an pair*/

    vec.emplace_back(3,4); /*1st index*/ /*emplace_back, automatically assume as a pair no need of curly braces {}*/
    
    cout<<vec.size()<<endl;/*gives the size of the vector*/

    for(int i=0; i<vec.size(); i++){
        cout<<vec[i].first<<" "<<vec[i].second<<" ";
    }

    return 0;
}