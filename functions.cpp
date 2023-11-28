//////////////Switch statement/////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

int main(){
  char n;
  cin>>n;
  int k;
  if(n=='c'){
    cin>>k;
  }

  switch(n){
    case 'a': cout<<"hello"<<endl;
    break;
    case 'b': cout<<"ook"<<endl;
    break;
    case 'c': switch(k){
      case 1: cout<<"first"<<endl;
      break;
      case 2: cout<<"second"<<endl;
    }

    default: cout<<"It is default case"<<endl;
  }
}*/
////////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

int main(){
  int a,b;

  cout<<"Enter the value of a."<<endl;
  cin>>a;

  cout<<"Enter the value of b."<<endl;
  cin>>b;

  char op;
  cout<<"Enter the operation to perform."<<endl;
  cin>>op;

  switch(op){
    case '+': cout<<(a+b)<<endl;
    break;
    case '-': cout<<(a-b)<<endl;
    break;
    case '*': cout<<(a*b)<<endl;
    break;
    case '/': cout<<(a/b)<<endl;
    break;

    default: cout<<"Please enter a valid Operation."<<endl;
  }
}*/
////////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

int main(){
  int a = 1;
  switch(a*2){//constant multiplied by a variable.
    case 1: cout<<"First"<<endl;
    case 2: cout<<"Second"<<endl;
  }
}*/
////////////////////////////////////////////////////////////////////////////////
//Power of a^b
/*#include<iostream>
using namespace std;

int main(){
  int a,b,ans;
  ans = 1;
  cin>>a>>b;
  for(int i=1; i<=b; i++){
    ans = ans*a;
  }
  cout<<ans;
}
*//////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

int power(int a, int b){
  int ans = 1;
  for(int i=1; i<=b; i++){
    ans = ans*a;
  }
  return ans;
}

int main(){
  int a,b;
  cin>>a>>b;
  int ans = power(a,b);
  cout<<"Anwer is "<<ans<<endl;
  return 0;
}*/
////////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

int power(){
  int a,b,ans;
  ans = 1;
  cin>>a>>b;
  for(int i=1; i<=b; i++){
    ans = ans*a;
  }
  return ans;
}

int main(){
  cout<<"Answer is "<<power()<<endl;
}*/
////////////////////////////////////////////////////////////////////////////////
//even odd numbers
/*#include<iostream>
using namespace std;
bool num(int a){
  if(a&1){
    return 0;
  }
  else{
    return 1;
  }
}
int main(){
  int n;
  cin>>n;
  if(num(n)){
    cout<<"Number is Even."<<endl;
  }
  else{
    cout<<"Number is Odd."<<endl;
  }
}*/
////////////////////////////////////////////////////////////////////////////////
//finiding combinatorics
/*#include<iostream>
using namespace std;

int fact(int n){
  int fact = 1;
  for(int i = 1; i<=n; i++){
    fact = fact*i;
  }
  return fact;
}

float nCr(int n, int r){
  float ans = fact(n)/(fact(r)*fact(n-r));
  return ans;
}

int main(){
  int n ,r;
  cin>>n>>r;
  cout<<nCr(n,r)<<endl;
}*/
////////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

int fact(int n){
  int ans = 1;
  for(int i = 1; i<=n; i++){
    ans = ans*i;
  }
  return ans;
}

float nCr(){
  int n,r;
  cin>>n>>r;
  float comb = fact(n)/(fact(r)*fact(n-r));
  return comb;
}

int main(){
  cout<<nCr()<<endl;
}*/
////////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

//Function Signature
void printCounting(int n){
  //function body
  for(int i=1; i<=n; i++){
    cout<<i<<endl;
  }
}

int main(){
  int n;
  cin>>n;
  //function call
  printCounting(n);
}*/
////////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

bool isPrime(int n){
  for(int i=2; i<n; i++){
    if(n%i==0){
      return 0;
    }
  return 1;
  }
}
int main(){
  int n;
  cin>>n;
  if(isPrime(n)){
    cout<<"is a prime no."<<endl;
  }
  else{
    cout<<"Not a prime no."<<endl;
  }
}*/
#include<iostream>
using namespace std;

int main()
{
  int a,b;
  cin>>a>>b;

  char op;
  cin>>op;

  switch(op){
    case '+': cout<<a+b;
    case '-': cout<<a-b;
  }
}
