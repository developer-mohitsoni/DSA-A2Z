#include <bits/stdc++.h>
using namespace std;

//! Character Hashing (This below Program valid for only lowerCase alphabets)

// Automatically assign value 0 when array declared as globally
// int hashh[26];

void fetchingProcess(int hashh[], char element)
{

    // Fetching Process

    cout << element << " appears: " << hashh[element - 'a'] << " times in a string";
}
void precomputationProcess(string &s, char element)
{

    // Precomputation Operation
    int hashh[26] = {0};

    //!  If you use int in the loop and compare it with s.size() (which is size_t), you may encounter warnings about signed-unsigned comparison. This is because int is signed (it can hold negative values), whereas size_t is unsigned.

    for (size_t i = 0; i < s.size(); i++)
    {
        // ch-'a' gives the index of the respective alphabets like, a = 0 , b = 1, c = 2 and so on..
        hashh[s[i] - 'a'] += 1;
    }

    fetchingProcess(hashh, element);
}

int main()
{
    string s;
    cout << "Enter The String: " << endl;
    cin >> s;

    char findCharacter;

    cout << "Enter the Character that you want how many times it appear in string: " << endl;

    cin >> findCharacter;

    precomputationProcess(s, findCharacter);

    return 0;
}