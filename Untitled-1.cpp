/*# include<iostream>

using namespace std;

int fact(int n){
  int f = 1;
  for(int i=1; i<=n; i++){
    f = f*i;
  }
  cout<<f<<endl;
  return f;
}

int main(){
  int n;
  cin>>n;
  cout<<"Factorial is "<<fact(n);
}*/
////////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

int fib(int n){
  if(n==1){
    return 0;
  }
  else if(n==2){
    return 1;
  }
  else{
    int k = fib(n-2)+fib(n-1);
    return k;
  }
}

int main(){
  int n;
  cout<<"Enter the range of series."<<endl;
  cin>>n;

  for(int i = 1; i<=n; i++){
    int result = fib(i);
    cout<<result;
  }
}*/
////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int bin = 0;
  for(n!==0){
    bool bit = n&1;
    bin = bit + bin*10;
    n = n>>1;
  }
  cout<<bin;
}
