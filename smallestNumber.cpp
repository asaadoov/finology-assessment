// Problem 2 - Asaad Balla
// The preoblem is to find the smallest positive umber that is divisible by all the numbers less than 20. Which is basically the LCM(1,20);

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

//finding the greatest common divider using  Euclid's algorithm
int gcd(int a,int b){ 

  int max, min;

  if(a > b) max = a , min = b;
  else max = b , min = a ;

  int q = floor(max / min) , r = (max % min);
  while(r!=0){
      max = min , min = r, q = floor(max / min), r = (max % min);
  }return min;
}

ll lcm(int a, int n){
  // assuming a=1, n=4
  ll result = a; //1
  for ( ll x = a; x <=n ; ++x){
      result = (result * x) / gcd(result,x);//result * x : 1 2 6 24 , gcd: 1 1 1 2 result: 1 2 6 12
  } return result; //12:
}

int main()
{   int a = 1, n = 20;
  cout<<lcm(a,n)<<endl;//12
}    