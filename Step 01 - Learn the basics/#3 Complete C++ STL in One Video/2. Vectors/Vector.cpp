#include<bits/stdc++.h>
using namespace std;

void explainVector(){
    
    // Creating a vector of integers
    vector<int> myVector;

    cout<<"Enter The Total Number Of Vector Size: "<<endl;
    int n;
    cin>>n;

    cout<<"Adding elements to the vector: "<<endl;

    for(int i=0; i<n; i++){
        int data;
        cin>>data;
        myVector.push_back(data);
    }

    cout<<endl;

    cout<<"Your Vector Elements Are:- "<<endl;
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << endl;
    }

    cout<<"Removing the last element from the vector"<<endl;
    myVector.pop_back();

    cout<<"Printing the elements of the vector after removal"<<endl;
    for (int i = 0; i < myVector.size(); i++) {
        cout << myVector[i] << endl;
    }

    // What are the operation performed in the vector?

}
int main(){
    // What is Vector in STL?
    // A Vector in STL C++ is a class in C++ STL that provides an implementation of the array abstraction. It offers an interface that closely resembles that of a dynamic array, providing efficient insertions and deletions.

    // Vectors in STL C++ have the following properties:

    /*
    * They are dynamic arrays. This means that the size of the vector is not fixed at the time of creation, and it can be increased or decreased during the program's execution.

    * They can efficiently perform insertions and deletions from both ends.

    * They can store multiple elements of the same data type.
    */

    explainVector();

    return 0;
}