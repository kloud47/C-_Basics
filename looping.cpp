// #include<iostream>
// using namespace std;
// int main(){
//
//   int n;
//   cin>>n;
//
//   int i = 1;
//   while (i<=n){
//      cout<<i<<" ";//it basiclly gives the counting
//      i = i + 1;
//   }
// }
//////////////////////////////////////////////////////////////////////////////
// #include<iostream>
// using namespace std;
//  int main(){
//
//    int n;
//
//    cin>>n;
//
//    int i = 1;
//    int sum = 0;
//
//    while (i<=n){
//      sum = sum + i;
//      cout<<sum<<endl;
//      i=i+1;
//    }
//    cout<< "value of sum is: "<<sum<<endl;
//  }
//////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

int main(){

  int n;

  cin>>n;

  int i = 0;
  int sum = 0;

  while (i<n){
    sum = sum + i;
    cout<<sum<<endl;
    i = i+2;

  }
  cout<<"value of sum: "<<sum<<endl;
}*/
///////////////////////////////////////////////////////////////////////////////////////////////
/*///////////(Break statement)////////////////////////////////////////
#include<iostream>
using namespace std;

int main()
{
  int stop;
  cout<< "where to stop at. "; cin >> stop;

  int i = 1;
  while(true){
    cout<< i <<endl;

    if(i == stop){
      break; //Breaks at stop:
    }
    i++;
  }

  return 0;
}*/
//////////////////////////////////////////////////////////////////////////////////////////////////
//////////(Continue statement)/////////////////////////////////
/*#include<iostream>
using namespace std;

int main()
{
  for(int i = 0; i < 10; i++){
    if(i == 2){
      continue; //skips the step if i = 2:
    }
    cout<< i << " ";
  }
}*/
///////////////////////////////////////////////////////////////////////////////////////////////////////
//////////(Do while statement)//////////////////////////
/*#include<iostream>
using namespace std;

int main()
{
  int i = 1;
  do{
    cout<< i <<" ";
  }while(false);
}*/
///////////////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

int main()
{
  int n,i = 0;
  cin>>n;
  do {
    cout<<i<<" ";
    i++;
  }
  while( i <= n);
}*/
