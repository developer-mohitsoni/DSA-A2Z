// Optimized Approach (Euclidean Algorithm):-

#include <bits/stdc++.h>
using namespace std;

int calcGCD(int n, int m)
{
    // The Euclidean algorithm is based on the principle that the GCD of two numbers also divides their difference.
    // It states that GCD(n, m) = GCD(m, n % m) if m != 0.
    // This means we can repeatedly replace the larger number with the remainder of the division until one of the numbers becomes zero.
    // When one of the numbers becomes zero, the other number is the GCD.

    // Explain in hinglish: with example
    // GCD ka matlab hai "Greatest Common Divisor" ya "Highest Common Factor".
    // Iska matlab hai dono numbers ka sabse bada number jo dono ko divide kar sake
    // Euclidean algorithm kehte hain ki agar hum dono numbers ko divide karein aur remainder lein,
    // toh GCD nikalne ka process asaan ho jata hai. 
    // Isme hum dono numbers ko baar baar divide karte hain aur remainder lete hain
    // Jab tak ek number zero nahi ho jata, tab tak hum ye process karte hain.
    // Jab ek number zero ho jata hai, toh dusra number GCD hota hai.
    // Example: Agar n = 48 aur m = 18, toh hum 48 ko 18 se divide karte hain
    // 48 % 18 = 12, toh ab hum n = 18 aur m = 12 lete hain
    // Phir 18 % 12 = 6, toh ab n = 12 aur m = 6 lete hain
    // Phir 12 % 6 = 0, toh ab n = 6 aur m = 0 lete hain
    // Ab m = 0 hai, toh GCD 6 hai.

    while (n > 0 && m > 0)
    {
        if (n > m)
            n = n % m;
        else
            m = m % n;
    }

    if (n == 0)
        return m;
    else
        return n;
}
int main()
{

    // T.C is:- O(log min(n,m))

    int n, m;

    cout << "Enter The First Number:- " << endl;
    cin >> n;

    cout << "Enter The Second Number:- " << endl;
    cin >> m;

    cout << "GCD/HCF between " << n << " and " << m << " is:- ";

    int gcd = calcGCD(n, m);

    cout << gcd;
}