// Optimized Approach in O(sqrt(n))

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cout<<"Enter The Number:- "<<endl;
    cin>>n;

    cout<<"Sum of all Divisors of "<<n<<" are:-"<<endl;

    vector<int>ans;

    int sum=0;

    // O(sqrt(n))

    // for(int i=1; i*i<=n; i++){
    for(int i=1; i<=sqrt(n); i++){
        if (n % i == 0) {
            sum += i;

        if ((n / i) != i)
            sum += n/i;
        }
    }

    cout<<sum;


    return 0;

}