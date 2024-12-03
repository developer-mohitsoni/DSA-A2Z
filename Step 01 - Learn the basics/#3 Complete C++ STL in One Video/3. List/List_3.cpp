#include<bits/stdc++.h>
using namespace std;

int main(){
    list<pair<int,int>>ls;

    ls.push_back({1,2}); /*push_back, need curly braces {} to shows as an pair*/

    ls.emplace_back(3,4); /*emplace_back, automatically assume as a pair no need of curly braces {}*/

    for (auto it = ls.begin(); it != ls.end(); ++it){
        cout << it->first << " " << it->second << " ";
    }

    cout<<endl;

    for(auto it : ls){
        cout<<it.first<<" "<<it.second<<" ";
    }
    
    cout<<endl;

    return 0;
}