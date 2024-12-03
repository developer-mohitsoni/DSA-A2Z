#include<bits/stdc++.h>
using namespace std;

void explainSet(){

    set<int>st;

    st.insert(1); // {1}
    st.emplace(2); // {1,2}
    st.insert(2); // {1,2}
    st.insert(4); // {1,2,4}
    st.insert(3); // {1,2,3,4}
    st.insert(5); // {1,2,3,4,5}

    // Functionality of insert in vector can be used also, that only increases efficiency.

   cout<<"Elements are:- "<<endl;

   for(auto it : st){
    cout<<it;
   }

    cout<<endl<<endl;

    cout<<"Size of the Element: "<<st.size()<<endl;
    cout<<"Maximum Size of the Element: "<<st.max_size()<<endl;

    // {1,2,3,4,5}
    auto it = st.find(3); // returning the iterator which points to the element value 3


    // {1,2,3,4,5}
    auto it2 = st.find(6); // returning the iterator which points to the element value 6, BUT here 6 value is not present so, It always return set.end()

    // {1,2,3,4,5}
    st.erase(5); // erase value which is equal to 5 // takes logarithmic time


    int cnt = st.count(1); // If element value 1 is present in a Set then return 1 else return 0.

    auto it3 = st.find(3);
    st.erase(it); // We can also erase it's address which have the value 3, It takes constant time


    // {1,2,3,4,5}
    auto it4 = st.find(2);
    auto it5 = st.find(4);

    st.erase(it4,it5); // after erase {1,4,5} [first, last)

    
    // lower_bound() and upper_bound() works in a same way as in vector it does.

    // This is the syntax
    auto it6 = st.lower_bound(2);
    auto it7 = st.lower_bound(3);

    // clear out the elements in a set
    st.clear();

}
int main(){
    // What is Set in STL?

    /* A set is a container that stores unique elements following a specific order. It does not store duplicate values. The value of the element is used to determine its uniqueness within the set. */

    // List of the Operations perfromed in a Set
    /*

    1. begin(): It returns an iterator pointing to the beginning of the set container.

    2. end(): It returns an iterator pointing to the end of the set container.

    3. empty(): This function checks whether the set object is empty or not. If it is empty then it returns  1 else it returns 0.

    4. size(): It returns the number of elements present in the set.

    5. max_size(): It returns the maximum number of elements that can be stored in the set.


    6. insert(): Inserts an element x into the set s if it does not already exist in the set. It returns void If the value exists, then it doesn't change anything.

    7. erase(): This function removes the specified element from the set s. It returns the number of elements removed (which will be either 0 or 1).

    8. swap(): It is used to swap two sets.
    
    9. clear(): This function is used to remove all elements from the set.

    10. find(): The function searches for the given element x in the set s. If the element is found, it returns an iterator pointing to that element. Otherwise, it returns end().

    11. count(): This member function returns the count of the specified element present in the set. If the element is not present in the set, it returns 0 otherwise it returns 1.


    12. lower_bound(): This function returns an iterator pointing to the first element that is greater than or equal to the given value. All the elements in the range [first,last) compare less with val. So, this function can be
    used to perform range queries on a sorted set.


    13. upper_bound(): Like lower_bound(), but it returns an iterator pointing to the next element that is greater than the given value.


    14. equal_range(): This function returns a pair containing two iterators. These iterators point to the range of elements with values equal to the given value.
    */


    explainSet();

    return 0;
}