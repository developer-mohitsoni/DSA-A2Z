#include<bits/stdc++.h>

using namespace std;
// Functions are set of code which performs something for you.
// Functions are used to modularise code.
// Functions are used to increase readibility.
// Functions are used to use same code multiple time.


// Pass by Reference with Pointers
void doSomething(string** s) { /*Ye jo address hai wo double pointer variable ka hai isliye isko store karne ki liye humne function ke argument mai double pointer variable use kiya hai.*/

  cout << **s << endl;

  
  // Dereference the pointer to access the string object
  string& s_ref = **s;/*Creating Reference variable of a string object
  This means that any changes made to the s_ref variable will be reflected in the original string object. 
  
  Ye jo reference string variable mujhse sirf original string mai changes karne ke liye karna pada hai yadi mai direct string ko print karna chatha to nai karna padta mujhe ye reference variable of string object*/

  // Modify the string object
  s_ref[s_ref.size() - 2] = 'a';
  s_ref[s_ref.size() - 1] = 'n';

}

int main(){
    string s = "Mohit";

    string* s_ptr = &s; // Get a pointer to the string object

    doSomething(&s_ptr); // Pass a pointer to the string object to the function

    cout << s << endl; // Print the original string object
    
    return 0;
}