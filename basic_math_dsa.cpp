///////////////////////////////////////////////////////////////////////////////
/////////(Prime or not)/////////////////////////////
/*#include<iostream>
using namespace std;

bool isPrime(int num)
{
  for(int i = 2; i<num; i++){
    if(num%i==0){
      return false;
    }
  }
  return true;
}

int main(){
  cout<<"Enter the no. ";
  int n;
  cin>>n;

  if(isPrime(n))
  {
    cout<<"It is Prime"<<endl;
  }
  else
  {
    cout<<"It is not Prime"<<endl;
  }
}*/
////////////////////////////////////////////////////////////////////////////////
/////////(Sieve of Eratosthenes)////////////////////////////////////
/*#include<iostream>
#include<vector>
using namespace std;

int isPrime(int n)
{
  int count = 0;
  vector<bool> primes(n+1, true);

  primes[0] = primes[1] = false;

  for(int i = 2; i<n; i++){
    if(primes[i]){
      count++;
      for(int j=2*i; j<n; j+=i){
        primes[j] = false;
      }
    }
  }
  return count;
}

int main(){
  cout<<"Enter the no. ";
  int n;
  cin>>n;

  cout<<"Number of primes till "<<n<<" are "<<isPrime(n);
}*/
///////////////////////////////////////////////////////////////////////////////
//////////////(GCD Euclid's method)//////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

int gcd(int a, int b)
{
  if(a==0){
    return b;
  }
  if(b==0){
    return a;
  }

  while(a!=b){
    if(a>b){
      a = a-b;
    }
    else{
      b = b-a;
    }
  }
  return a;
}

int main(){
  cout<<"Numbers for GCD ";
  int a,b;
  cin>>a>>b;

  cout<<"GCD is "<<gcd(a,b);
}*/
////////////////////////////////////////////////////////////////////////////////
////////(GCD using Modulus)///////////////////////////////////////
/*#include<iostream>
using namespace std;

int gcdmod(int a, int b)
{
  if(a==0){
    return b;
  }
  if(b==0){
    return a;
  }
  int r = 1;
  while(r>0){
    r = a%b;
    if(a>b){
      r = a%r;
      a = b;
    }
    else{
      r = b%r;
      b = a;
    }
  }
  return r;
}

int main()
{
  cout<<"Numbers for GCD ";
  int a,b;
  cin>>a>>b;

  cout<<"GCD is "<<gcdmod(a,b);
}*/
////////////////////////////////////////////////////////////////////////////////
/*
:Modular Arithmetic:
{
  (a+b)%m = a%m + b%m
  (a-b)%m = a%m - b%m
  (a*b)%m = a%m * b%m
}
*/
////////////////////////////////////////////////////////////////////////////////
////////(Fast Exponentiation)//////////////////////////////////////
/*#include<iostream>
using namespace std;

int Exponentiation(int x, int n, int m)
{
  int res = 1;
  while(n>0){
    if(n&1){
      //odd
      res = (1LL * (res) * (x)%m)%m;
    }
    x = (1LL * (x)%m * (x)%m)%m;
    n = n>>1;
  }
  return res;
}

int main()
{
  cout<<"Exponentiation of (x^n)%m "<<endl;
  int n,x,m;
  cout<<"x ";
  cin>>x;
  cout<<" n ";
  cin>>n;
  cout<<" m ";
  cin>>m;

  cout<<"Answer is "<<Exponentiation(x,n,m);
}
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
#include<climits>
using namespace std;

int main()
{
  cout<<"This is a maximum range of INT=> "<< INT_MAX <<endl;
  cout<< INT_MAX + 1 <<endl;
  cout<< INT_MAX + 2 <<endl;
}