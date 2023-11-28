// #include<iostream>
// using namespace std;
//
// int main(){
//   int n,sum,product;
//   cin>>n;
//
//   sum = 0;
//   product = 1;
//
  //   while(n){
//     int k = n%10;
//     sum += k;
//     product *= k;
//     n = (n)/10;
//   }
//
//   cout<<"Sum of no. = "<<sum<<endl;
//   cout<<"Product of no. = "<<product<<endl;
// }
///////////////////////////////////////////////////////////////////////////////
// int main(){
//   int n;
//   cin>>n;
//   int count = 0;
//   while(n!=0){
//
//     if(n&1){
//       count++;
//     }
//     n = n>>1;
//   }
//   cout<<count<<endl;
// }
///////////////////////////////////////////////////////////////////////////////
//Reverse integer
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
//
// int main(){
//   cout<<"Enter the number. ";
//   int n;
//   cin>>n;
//   int ans = 0;
//   while(n!=0){
//     int digit = n%10;
//     if(ans > INT_MAX/10 || ans < INT_MIN/10){
//       cout<<"Out of range.";
//       return 0;
//     }
//     ans = digit + (ans*10);
//     n = n/10;
//   }
//   cout<<ans;
// }
////////////////////////////////////////////////////////////////////////////////
//Complement of base 10 integer.
/*#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int n,formula,mask;
  cin>>n;
  int m = n;

  //Edge case
  mask = 0;
  if(n == 0){
    cout<<"1";
    return 1;
  }
  while(m!=0){
    mask = (mask << 1) | 1;
    m = m >> 1;
  }
  int ans = (~n) & mask;
  cout<<ans;
}*/
///////////////////////////////////////////////////////////////////////////////
//Number is in power of 2;
/*#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int n;
  cin>>n;

  int i = 2;
  int j = 2;
  while(i <= n){
    if(n%i == 0){
      i = pow(2,j++);
    }
    else{
      cout<<"not a power of 2";
      break;
    }
  if(n==i){
    cout<<"is a power of 2";
  }
  }
}*/
///////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
#include<math.h>
using namespace std;

int main(){
  int n;
  cin>>n;

  int ans = 1;

  for(int i = 0; i <= 30; i++){5
    if(ans == n){
      cout<<"true";
    }
    else{
      cout<<"false";
      break;
    }
  }
}*/
///////////////////////////////////////////////////////////////////////////////
/////////(Reverse integer using long long integer)////////////
/*#include<iostream>
#include<climits>
using namespace std;

int reverse(int x){
  long long int ans = 0;
  while(x){
    int digit = x%10;
    ans = ans*10 + digit;
    if(ans>INT_MAX || ans<INT_MIN){
      return 0;
    }
    x = x/10;
  }
  ans  = x<0 ? -ans : ans;
  return ans;
}

int main(){
  int n;
  cin>>n;

  int k = reverse(n);
  cout<<"Reversed no. is-> "<<k;
}*/
