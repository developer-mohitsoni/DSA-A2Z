#include<bits/stdc++.h>

using namespace std;
/*
A school as following rules for grading system:
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
Ask user to center marks and print the corresponding grade.
*/
int main(){

    int marks;
    cin>>marks;

    if(marks < 25)
        cout<<"F";

    // We can also done as as we know previous condition is check first that's why done like that without using logical &&

    // Using else if means yadi meri ek bhi condition "true" ho jaati hai toh next condition ko wo check nai karega BUT
        // If we use this using multiple "if" statements it's checks all it's condition even we get the first result "true".
    
    else if(marks <= 44)
        cout<<"E";

    else if(marks <= 49)
        cout<<"D";

    else if(marks <= 59)
        cout<<"C";

    else if(marks <= 79)
        cout<<"B";

    else if(marks <= 100)
        cout<<"A";

    return 0;
}