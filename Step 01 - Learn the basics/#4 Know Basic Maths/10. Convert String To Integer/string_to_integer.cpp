#include <iostream>
using namespace std;

int main()
{
    // Using ASCII
    string s = "5";
    int num = s[0] - '0';
    cout << num << endl;

    // Using Loop to convert String into Integer
    string s2 = "5726";
    int number = 0;

    for (int i = 0; i < s2.size(); i++)
    {
        number = number * 10 + (s2[i] - '0');
    }
    cout << number << endl;

    // Using Inbuilt Function
    string s3 = "2428641";

    int newNumber = stoi(s3);

    cout << newNumber;
}