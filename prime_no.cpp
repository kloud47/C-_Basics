// PRIME Number
#include<iostream>
using namespace std;

int main(){

  int n;
  cout<<"Enter the value of n"<<endl;
  cin>>n;

  //int i = 2;
  //
  // while (i<n){
  //
  //   if(n%i == 0){
  //     cout<<" Not prime for: "<<i<<endl;
  //   }
  //   else{
  //     cout<<n<<" Prime for: "<<i<<endl;
  //   }
  //   i = i + 1;
  // }
///////////////////////////////////////////////////////////////////
  bool isprime = 1;
  for(int i = 2; i<n; i++){
    if(n%i==0){
      isprime = 0;
      break;
    }
  }
  if(isprime == 0){
    cout<<"Not a Prime no."<<endl;
  }
  else{
    cout<<"Is a Prime no."<<endl;
  }
}
