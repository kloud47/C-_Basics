////////////////////////////////////////////////////////////////////////////////
/////////(Sharing variable by using Reference variable)///////////////////
/*#include<iostream>
using namespace std;

void b(int &i)
{
  cout<<i<<endl;
}


void a(int &i)
{
  cout<<i<<endl;
  b(i);
}

int main()
{
  int i = 5;
  a(i);

  return 0;
}*/
////////////////////////////////////////////////////////////////////////////////
////////////////////(Global variable)///////////////////////////////////////
/*#include<iostream>
using namespace std;

int score = 15;//Global variable: don't use much
int num = 10;

void a()
{
  cout<<score<<" in func1 "<<endl;
  cout<<num<<endl;
  num++;//function can affect global variable:
}

void b()
{
  cout<<score<<" in func2 "<<endl;
  cout<<num<<endl;
}

int main()
{
  cout<<score<<" in main"<<endl;
  int i = 5;
  a();
  b();
}*/
////////////////////////////////////////////////////////////////////////////////
/////////////(In-line functions)//////////////////////////////
//////(for one line functions: replaces function name by function body)
/*#include<iostream>
using namespace std;

inline int getmax(int a, int b)
{
  return (a>b) ? a:b;//Ternary or conditional operator
  //condition ? expression1 : expression2;
}

int main()
{
  int a = 1, b = 2;
  int ans = 0;

  ans = getmax(a,b);
  cout<< ans <<endl;

  a += 3;
  b += 1;

  ans = getmax(a,b);
  cout<< ans <<endl;
}*/
////////////////////////////////////////////////////////////////////////////////
////////////(default arguments)//////////////////////////////
/*#include<iostream>
using namespace std;

void print(int arr[], int n, int start = 1)//start becomes a default argument
{//Right most has to be a default argument:
  for(int i = start; i<n; i++){
    cout<<arr[i]<<endl;
  }
}

int main()
{
  int arr[5] = {1,4,7,8,9};
  int size = 5;
  print(arr, size);
  cout<<endl;
  print(arr, size, 2);
  cout<<endl<<endl;
  print(arr, size, 3);


  return 0;
}*/
///////////////////////////////////////////////////////////////////////////////
