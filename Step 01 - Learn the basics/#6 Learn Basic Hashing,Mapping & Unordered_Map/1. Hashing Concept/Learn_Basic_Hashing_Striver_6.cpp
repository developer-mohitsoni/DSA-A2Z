#include <bits/stdc++.h>
using namespace std;

//! Character Hashing (This below Program is valid for both lowerCase as well as upperCase alphabets)

// Automatically assign value 0 when array declared as globally
// int hashh[256];

void fetchingProcess(int hashh[], char element)
{

    // Fetching Process

    cout << element << " appears: " << hashh[element] << " times in a string";
}
void precomputationProcess(string &s, char element)
{

    // Precomputation Operation
    int hashh[256] = {0};

    for (size_t i = 0; i < s.size(); i++)
    {
        // Jab hum kehte hain hashh[s[i]], to yahaan s[i] ka use character ko fetch karne ke liye ho raha hai, par actual me s[i] ki ASCII value ko index ke tarah treat kiya jaa raha hai.

        // Example:
        // Agar string me 'a' hai, to s[i] = 'a' hoga. ASCII value of 'a' hoti hai 97, to hashh[97] use hoga.
        // Similarly, agar string me 'B' hai, to s[i] = 'B' hoga, aur ASCII value of 'B' hoti hai 66, to hashh[66] use hoga.
        hashh[s[i]] += 1;

        // Here it will autocast s[i] value into integer
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