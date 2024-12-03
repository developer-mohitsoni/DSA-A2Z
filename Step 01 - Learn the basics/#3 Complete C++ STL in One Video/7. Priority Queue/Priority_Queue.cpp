#include <bits/stdc++.h>
using namespace std;

void explainPQ()
{

    //! Maximum Heap
    priority_queue<int> pq;

    pq.push(5);    // {5}
    pq.push(2);    // {5,2}
    pq.push(8);    // {8,5,2}
    pq.push(10);   // {10,8,5,2}
    pq.emplace(6); // {10,8,6,5,2}

    cout << pq.top() << endl; // prints 10

    pq.pop();

    cout << pq.top() << endl; // prints 8

    cout << pq.size() << endl; // 4

    cout << pq.empty() << endl; // 0

    // swap and other functions are same as others

    cout << endl;

    //! Mininum Heap

    // Explain:-
    //* int: Ye define karta hai ki priority queue ke andar kaunse type ke elements store karne hain. Yahaan int type ke elements honge.

    //* vector<int>: By default, priority_queue internally ek container use karta hai, jo ki max heap banata hai. Yahaan hum vector ko container ke taur par use kar rahe hain.

    //* greater<int>: Yeh important part hai! Isse bataya jaata hai ki comparison kaise hona chahiye. Default behavior mein toh less<int> use hota hai jo Max Heap banata hai. Agar hum greater<int> ka use karte hain, toh yeh chhoti values ko top pe rakhna start karta hai, jisse Min Heap ban jaata hai.

    //! Simple Words Mein:-

    //* Default behavior: Max Heap hota hai, jismein sabse badi value top pe hoti hai.

    //* greater<int> comparator: Iska use karke hum comparison reverse kar dete hain, jisse sabse chhoti value top pe aa jaati hai, aur Min Heap ban jaata hai.

    //! NOTE:- In the case of priority_queue, greater<int> is passed as a type, not an object. When defining the priority queue, the third template parameter specifies the comparator's type, not an instance of it. Since template arguments expect a type, you do not need parentheses here.
    priority_queue<int, vector<int>, greater<int>> pq2;

    pq2.push(5);    // {5}
    pq2.push(2);    // {2,5}
    pq2.push(8);    // {2,5,8}
    pq2.push(10);   // {2,5,8,10}
    pq2.emplace(1); // {1,2,5,8,10}

    cout << pq2.top() << endl; // prints 1

    while (!pq2.empty())
    {
        cout << pq2.top() << " ";
        pq2.pop();
    }
}
int main()
{
    // What is Priority Queue in STL?
    // A Priority Queue in STL C++ is a type container adapter that provides a restricted subset of queue operations, but with a priority property. It allows only the highest priority element to be accessed and removed. By default, it creates a max-heap for the queue, where the first element is the maximum all elements in the and elements are in decreasing order. However, you can also create a min-heap priority queue that arranges elements in ascending order.

    /*
    A priority queue is a data structure that stores elements in such a way that the highest (or lowest) priority item is returned first. In other words, it is an abstract data type that provides constant time performance for the enqueue and dequeue operations that the highest (or lowest) priority item is returned first. In other words, it gives the least frequent element when we continuously remove the element with the highest (or lowest) priority. The elements with higher priority are placed before the elements with lower priorities.
    */

    // List of the Operations perfromed in a Priority Queue?

    /*
        1. push(): It is used to add an element at the rear end of the queue.
        2. pop(): It is used to remove an element from the front end of the queue.
        5. empty(): It checks whether the queue is empty or not. If it is empty, then it returns true otherwise false.
        6. size(): It gives us the number of elements present inside the queue.
        7. top():  It returns the value of the highest priority element (based on comparison).
        8. swap(): It is used to exchange the contents with another container.
    */

    explainPQ();

    return 0;
}