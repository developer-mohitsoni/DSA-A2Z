#include<bits/stdc++.h>
using namespace std;


// Hasing:- Prestoring and fetching

// Problem:- Suppose an vector array has atmost max element contains 12 number

// means:- arr[1,2,1,3,2], here atmost max = 3
// similarly:- arr[1,2,12,4,5,6,8] , here atmost max = 12

// Hasing basically here create an new array called "hash array" which contains the indexing from 0 to 12 for this problem

// and set all the elements first with 0


// Precalculation Operation (Prefetching):-

// I will go the original array and check the value of first index, Now value that they fetch will map that index on the "hash array" and set it's value to 1.
    // This process is done for all it's element.
    // If the element contains already value 1 then incremented by 1 over and over again.

// Final Operaton:-

// Now we have to find the occurence of( element value in orginal array using "hash[i]"; where, i => generally shows a loop starts

void fetchingProcess(int hashh[], int element){

    // Fetching Process
    
    cout<<element<<" appears: "<<hashh[element]<<" times in an vector array";
}
void precomputationProcess(vector<int>&v,int element, int max){

    // Precomputation Operation
    int hashh[max] = {0};

    for(int i=0; i<v.size(); i++){
        hashh[v[i]] += 1;
    }

    fetchingProcess(hashh,element);
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
    // Finding Maximum Value among array
    int max_value = *max_element(arr.begin(),arr.end());

    int findElement;

    cout<<"Enter the element that you want how many times it appear in vector array: "<<endl;

    cin>>findElement;

    precomputationProcess(arr,findElement,max_value);

    return 0;
}