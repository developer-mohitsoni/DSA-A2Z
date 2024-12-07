#include<bits/stdc++.h>
using namespace std;


// T.C Of Unordered_Map:-
    // precomputation (storing) process and fetching process takes O(1) T.C in most of the cases in Best and Average Case

    // But in Worst Case it might be take O(N) T.C that occurs rarely
        // where, N = number of elements in the Unordered_Map


// NOTE:- If it give TLE Error obviously for Worst Case by using Unordered_Map,
    // then in this suitation switch to Map and use it because it takes log(N) T.C in Worst Case

void printMap(unordered_map<int,int>&ump){
    // iterate in the map
    for(auto it: ump){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    cout<<endl;
}

void fetchingProcess(unordered_map<int,int>&ump,int value){

    // Fetching Process
    
    cout<<value<<" appears: "<<ump[value]<<" times in an vector array"<<endl;


    printMap(ump);
}
void precomputationProcess(vector<int>&v,int value){

    // Precomputation Operation
    unordered_map<int,int> umpp;

    for(int i=0; i<v.size(); i++){
        umpp[v[i]]++;

        // Both are same

        // umpp[v[i]] += 1;
    }

    fetchingProcess(umpp,value);
}

int main(){
    int n;
    cout<<"Enter The Size of Vector: ";
    cin>>n;

    cout<<"Enter The Number of Elements: "<<endl;

    vector<int>arr;

    for(int i=0; i<n; i++){

        int data;
        cin>>data;

        arr.push_back(data);
    }
    int findElement;

    cout<<"Enter the element that you want how many times it appear in vector array: "<<endl;

    cin>>findElement;

    precomputationProcess(arr,findElement);

    return 0;
}