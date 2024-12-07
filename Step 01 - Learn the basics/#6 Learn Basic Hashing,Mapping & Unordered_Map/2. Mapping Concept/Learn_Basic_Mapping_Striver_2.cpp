#include<bits/stdc++.h>
using namespace std;

//! Character Mapping 
// T.C Of Map:-
    // precomputation (storing) process and fetching process takes logarithmic(N) T.C in all Cases Best,Average and Worst
        // where, N = number of elements in the map


void printMap(map<char,int>&mp){
    // iterate in the map
    for(auto it: mp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    cout<<endl;
}
void fetchingProcess(map<char,int>&mp, char value){

    // Fetching Process
    
    cout<<value<<" appears: "<<mp[value]<<" times in a string";

    printMap(mp);
}
void precomputationProcess(string &s,char value){

    map<char,int> mpp;


    for(int i=0; i<s.size(); i++){
        mpp[s[i]] += 1;
    }

    fetchingProcess(mpp,value);
}

int main(){
    string s;
    cout<<"Enter The String: "<<endl;
    cin>>s;

    char findCharacter;

    cout<<"Enter the Character that you want how many times it appear in string: "<<endl;

    cin>>findCharacter;

    precomputationProcess(s,findCharacter);

    return 0;
}