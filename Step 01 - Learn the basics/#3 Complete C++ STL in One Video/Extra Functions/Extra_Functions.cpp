#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2)
{

    // sort it according to second elmenet
    // if second element is same, then sort
    // it according to first element but in descending

    if (p1.second < p2.second)
        return true;

    // they swap internally
    if (p1.second > p2.second)
        return false;

    if (p1.first > p2.first)
        return true;

    return false;
}

void explainExtra()
{
    int a[] = {1, 5, 3, 2};
    int n = sizeof(a) / sizeof(a[0]);
    // a[] -> {1,5,3,2}
    sort(a, a + n); // [a, a+n)

    vector<int> v = {1, 5, 3, 2};
    sort(v.begin(), v.end());

    sort(a + 2, a + 4);

    // to sort in a descending order here:- greater<int> is a comparator which helps in sorts in a descending order

    //! NOTE:- When using std::sort, you're passing a function object (also called a functor), and greater<int>() creates an instance of this functor. The parentheses () are required because you're creating an object of the greater<int> class, which is used as a custom comparator.

    //! Here, greater<int>() is a temporary object of the greater class, which is passed to sort to compare elements.
    sort(a, a + n, greater<int>());

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    int n = sizeof(a) / sizeof(a[0]);

    // here:- comp is a self-written comparator this comparator is nothing but a boolean function
    sort(a, a + n, comp);

    // {{4,1},{2,1},{1,2}};

    int num = 7;

    // return 3 set bits in binary 111
    int cnt = __builtin_popcount(num);

    // retur  setbits for long long integer
    long long num = 165786578687;
    int cnt = __builtin_popcountll(num);

    string s = "123";

    sort(s.begin(), s.end());

    // NOTE:- To find out all the permulation you need to just start the string in a sorted manner otherwise it will give wrong result permutation.

    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    // Find maximum element in array,vector and more STL's

    // This max_element gives the address of that maximum element, and if we add prefix (*) to it's it gives it maximum value of that address.

    int maxi = *max_element(a, a + n);
}
int main()
{
    explainExtra();

    return 0;
}