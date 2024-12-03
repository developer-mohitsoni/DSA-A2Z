// Optimized Approach in O(sqrt(n))

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
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