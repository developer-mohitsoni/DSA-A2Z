#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cout<<"Enter The Number:- "<<endl;
    cin>>n;

    cout<<"Sum of all Divisors of "<<n<<" are:-"<<endl;

    int sum=0;

    for(int i=1; i<=n; i++){
        if(n % i == 0){
            sum += i;
        }
    }

    cout<<sum;

    return 0;

}