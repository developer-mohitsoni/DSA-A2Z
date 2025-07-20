// Optimized Approach in O(sqrt(n))

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){

    // Suppose n = 49
    // Then we will check from 1 to sqrt(n)
    // If n % i == 0, then i is a divisor of n
    // For example, if n = 49, then 1 7 49

    // We will print all such divisors
    // We will loop from 2 to sqrt(n) and check if n % i == 0
    // If it is true, we will return false because n is not prime

    // Why we start from 2?
    // Because 1 is not a prime number and we don't need to check it
    // Also, we check up to sqrt(n) because if n is divisible by any number

    // greater than sqrt(n), then it will also be divisible by a number less than sqrt(n)
    // For example, if n = 49, then 49 is divisible by 7 and 7 is less than sqrt(49)
    // So we only need to check up to sqrt(n) to determine if n is prime
    // If n is less than or equal to 1, it is not prime
    // If n is 2, it is prime
    // If n is greater than 2 and even, it is not prime

    if(n<=1) return false;

	for(int i=2; i<=sqrt(n); i++){
        if(n % i == 0 ) return false;
	}
    return true;
}

int main(){
    int n;

    cout<<"Enter The Number:- "<<endl;
    cin>>n;

    cout<<"Number "<<n<<" is:- ";

    if(isPrime(n)) cout<<"Prime";
    else cout<<"Not Prime";

    return 0;

}