#include<bits/stdc++.h>
using namespace std;

void explainDeque(){

    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element is: " << q.front() << endl;
    cout << "Back element is: " << q.back() << endl;

    q.pop();

    cout << "Front element is: " << q.front() << endl;
    cout << "Back element is: " << q.back() << endl;

    cout << "Queue size is: " << q.size() << endl;

    if(q.empty())
        cout << "Queue is empty" << endl;
    else
        cout << "Queue is not empty" << endl;

}
int main(){
    // What is Queue in STL?
    // A queue in STL C++ is a dynamic data structure that allows for elements to be added and removed from a queue. The main difference between a queue and a vector in STL C++ is that while vectors have a continuous block of memory, queues have blocks of memory that are scattered in memory. Each block contains a fixed number of elements and a reference to the next block in the sequence.

    /*
    A queue is a particular kind of data structure in which operations are performed by the principal operations: insertion at the end and removal from the beginning. The insertion and removal operations in a queue follow the First-In-First-Out (FIFO) order, i.e., the element inserted first will be removed first.
    */

   // List of the Operations perfromed in a Queue?

    /*
   * 1. push(g): This operation inserts an element g at the end of the queue.
   * 2. pop(): This operation removes the first element of the queue.
   * 3. front(): This operation returns the first element of the queue without removing it.
   * 4. back(): This operation returns the last element of the queue without removing it.
   * 5. empty(): This operation checks whether the queue is empty or not.
   * 6. size(): This operation returns the number of elements in the queue.
   */

    explainDeque();

    return 0;
}