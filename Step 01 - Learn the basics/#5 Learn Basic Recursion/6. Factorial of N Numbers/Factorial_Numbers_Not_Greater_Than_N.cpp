// This code snippet calculates and prints all the factorial numbers that are less than or equal to a given number 'n'.
#include <bits/stdc++.h>
using namespace std;

long long fact(long long x)
{
    if (x <= 1)
        return 1;

    return x * fact(x - 1);
}
vector<long long> factorialNumbers(long long n)
{
    // Write Your Code Here
    vector<long long> ans;

    long long x;

    // n / 2 + 1 ka logic yeh hai ki factorial numbers bohot rapidly bade ho jaate hain, aur n / 2 + 1 tak jaane par humko waise hi factorials mil jaate hain jo n ke barabar ya usse chhote hote hain.

    // For example, agar n = 120 hai, toh n / 2 + 1 = 60 + 1 = 61. Matlab loop maximum i = 61 tak chal sakta hai. Lekin hum dekhte hain ki fact(5) = 120 ke baad, factorials bohot bade ho jate hain, jaise fact(6) = 720, toh loop kabhi 61 tak jaane ki zarurat nahi padti.

    for (long long i = 1; i <= n / 2 + 1; i++)
    {
        x = fact(i);

        if (x > n)
            return ans;
        else
            ans.push_back(x);
    }
    return ans;
}
int main()
{
    long long n;

    cout << "Enter The Number:- " << endl;
    cin >> n;

    cout << "Factorial Number Not Greater Than N are:- ";

    vector<long long> arr = factorialNumbers(n);

    for (auto arr : arr)
        cout << arr << " ";

    return 0;
}