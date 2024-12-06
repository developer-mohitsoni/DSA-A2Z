#include<bits/stdc++.h>
using namespace std;

//! Character Occurence Without Hashing (Only Work if string is in lowerCase)
void findCharOccur(string &str, char character){
    int count = 0;

    for(int i=0; i<str.size(); i++){
        if(str[i] == character){
            count++;
        }
    }

    cout<<endl;

    cout<<character<<" appears: "<<count<<" times in string "<<str;

    // T.C is  O(q*n) , where q = squery
    // and S.C is O(1)

    // Next we have see how to perform "Hashing" in this code
}

int main(){
    string s;
    cout<<"Enter The String: "<<endl;
    cin>>s;

    char findCharacter;

    cout<<"Enter the Character that you want how many times it appear in string: "<<endl;

    cin>>findCharacter;

    findCharOccur(s,findCharacter);

    return 0;
}