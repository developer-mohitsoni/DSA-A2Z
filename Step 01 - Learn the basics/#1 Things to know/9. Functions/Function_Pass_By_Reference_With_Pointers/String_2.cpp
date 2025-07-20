#include <bits/stdc++.h>

using namespace std;
// Functions are set of code which performs something for you.
// Functions are used to modularise code.
// Functions are used to increase readibility.
// Functions are used to use same code multiple time.

// Pass by Reference with Pointers
void doSomething(string *s)
{

  cout << *s << endl; // Print the original string object passed in function call.

  string &new_str = *s; // creating a reference variable and pointing it towards the address of value in main memory where "

  new_str[new_str.size() - 2] = 'a';
  new_str[new_str.size() - 1] = 'n';

  // You can also done this as well

  /*
  s[s.size() - 1] = "n";
  s[s.size() - 2] = "a";
  */
}

int main()
{
  string *s = new string("Striver DSA A-Z Series"); // Dynamically allocated memory for a string object

  doSomething(s); // Pass a pointer to the string object to the function

  cout << s << endl; // Print the original string object

  delete s; // Free the dynamically allocated memory

  return 0;
}