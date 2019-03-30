// Problem 1 - Asaad Balla 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isPrime(ll n)
{
    if(n==2) return true; //2 is the only even prime and the smallest one
    if(n%2==0 || n<2 ) return false; //if a number is divisible by 2 then it is even
    // checking up to a<=sqrt(n) is enough, a*a<=n == a<=sqrt(n)
    for( ll a=3; a * a <= n ; a+=2 ){
        if(n % a == 0 ) return false;
    } return true;
}

int main(){
    long sum=0;
    ll num=2e6; // 2e6 == 2x10^6 == 2000000
    for(ll i = 1 ; i<num; i++)
        if(isPrime(i)) sum+=i;
    cout<<sum<<endl; // 1179908154 is the sum of all the prime
}