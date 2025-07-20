#include<bits/stdc++.h>
using namespace std;

void explainList(){

    // Create an empty list
    list<int> myList;

    // Add elements to the list
    myList.push_back(5);
    myList.push_back(10);
    myList.push_back(15);

    // Display the elements of the list
    cout << "The elements of the list are: ";
    for (auto num : myList) {
        cout << num << " ";
    }

}
int main(){
    // What is List in STL?
    // A list in STL C++ is a dynamic data structure that allows for elements to be added, removed, and accessed efficiently. The main difference between a list and a vector in STL C++ is that while vectors have a continuous block of memory, lists have nodes that are scattered in memory. Each node contains an element and a reference to the next node in the sequence.

    // The STL list library provides the following member functions to perform operations on a list:

    //* Most Important used List member functions are:-
    // 1)- .sort()
    // 2)- .reverse()
    // 3)- .unique()
    // 4)- .merge(list2)
    // 5)- .splice(pos, list2, [beg, end])
    // 6)- .remove(particular element)

    /*
    * 1)- push_back(g): This function adds a new element at the end of the list.

    * 2)- push_front(g): This function adds a new element at the beginning of the list.

    * 3)- pop_back(): This function removes the last element of the list.

    * 4)- pop_front(): This function removes the first element of the list.

    * 5)- front(): This function returns the first element of the list.

    * 6)- back(): This function returns the last element of the list.

    * 7)- size(): This function returns the number of elements in the list.

    * 8)- empty(): This function checks whether the list is empty or not.

    * 9)- clear(): This function removes all the elements from the list.

    * 10)- insert(pos, x): This function inserts a new element at a specified position in the list.

    * 11)- erase(pos): This function removes an element at a specified position from the list.

    * 12)- remove(x): This function removes all the occurrences of a specific element from the list.

    * 13)- remove_if(pred): This function removes all the elements from the list for which a specific condition is satisfied.
    
    * 14)- sort(): This function sorts the elements of the list in ascending order.

    * 15)- reverse(): This function reverses the order of the elements in the list.

    * 16)- unique(): This function removes all the consecutive duplicates from the list.

    * 17)- merge(list2): This function merges two sorted lists into one sorted list.

    * 18)- splice(pos, list2): This function moves elements from one list to another.

    NOTE:- Please note that, while list in STL C++ offers similar functionality to vectors, the main difference is the underlying implementation and the speed of various operations.</s>

    It's important to mention that while a list    
    */

    explainList();

    return 0;
}