//////////////(Macros)//////////////////////////////////////////////////////////
//////(Object-like Macros)//////////////////
/*#include<iostream>
using namespace std;
#define PI 3.14//Macros:

int main()
{
  int r = 5;

  double area = PI*r*r;
  cout<<"Area is "<<area<<endl;

  return 0;
}*/
////////////////////////////////////////////////////////////////////////////////
/////////(Chain Macros)////////////////////////////////
/*#include<iostream>
using namespace std;

#define instagram followers
#define followers 138

int main()
{
  cout<<"Geeks for Geeks have "<<instagram<<"k followers on Instagram."<<endl;
}*/
////////////////////////////////////////////////////////////////////////////////
//////////(Multi-line Macros)/////////////////////////
/*#include<iostream>
using namespace std;

#define ELE 1, \
            2, \
            3, \
            4

int main()
{
  int arr[] = {ELE};

  cout<<"Elements in array are:\n ";
  for(int i = 0; i<4; i++){
    cout<<arr[i]<<" ";
  }cout<<endl;
}*/
////////////////////////////////////////////////////////////////////////////////
//////////(Function-like Macro)///////////////////////////////////////
/*#include<iostream>
using namespace std;

#define min(a, b) (((a) < (b)) ? (a) : (b))

int main()
{
  int a = 18;
  int b = 76;

  cout<<"Minimum value between "<<a<<" and "<<b<<" is "<<min(a, b);
}*/
////////////////////////////////////////////////////////////////////////////////
