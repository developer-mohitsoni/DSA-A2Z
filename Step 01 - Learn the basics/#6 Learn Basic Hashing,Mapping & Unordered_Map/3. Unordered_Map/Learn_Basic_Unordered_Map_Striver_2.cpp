#include<bits/stdc++.h>
using namespace std;


//! Character Mapping 
// T.C Of Unordered_Map:-
    // precomputation (storing) process and fetching process takes O(1) T.C in most of the cases in Best and Average Case

    // But in Worst Case it might be take O(N) T.C that occurs rarely
        // where, N = number of elements in the Unordered_Map


// NOTE:- If it give TLE Error obviously for Worst Case by using Unordered_Map,
    // then in this suitation switch to Map and use it because it takes log(N) T.C in Worst Case

void printMap(unordered_map<char,int>&ump){
    // iterate in the map
    for(auto it: ump){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    cout<<endl;
}
void fetchingProcess(unordered_map<char,int>&ump, char value){

    // Fetching Process
    
    cout<<value<<" appears: "<<ump[value]<<" times in a string";

    printMap(ump);
}
void precomputationProcess(string &s,char value){

    unordered_map<char,int> umpp;


    for(int i=0; i<s.size(); i++){
        umpp[s[i]] += 1;
    }

    fetchingProcess(umpp,value);
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