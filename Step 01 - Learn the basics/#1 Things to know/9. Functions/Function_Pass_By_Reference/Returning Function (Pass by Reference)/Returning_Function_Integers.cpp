#include <iostream>
using namespace std;

int &doSomething(int &num)
{
    num += 10;  // num ko 10 se badha diya
    return num; // num ka reference return kiya
}

int main()
{
    int x = 5;
    doSomething(x) = 20; // x ka reference return ho raha hai, toh x = 20 ho jayega
    cout << x;           // Output: 20
    return 0;
}
