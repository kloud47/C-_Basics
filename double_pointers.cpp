////////(Double Pointers)///////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

int main()
{
  int i = 5;
  int* p1 = &i;
  int** p2 = &p1;

  cout<<endl<<endl<<"Double pointers "<<endl<<endl;;
  cout<<"printing p1 "<<p1<<endl;
  cout<<"Address of p1 "<<&p1<<endl;
  cout<<"printing p2 "<<p2<<endl;
  cout<<*p2<<endl<<endl<<endl;

  cout<<i<<endl;
  cout<<*p1<<endl;
  cout<<**p2<<endl;

  cout<<&i<<endl;
  cout<<p1<<endl;
  cout<<*p2<<endl<<endl<<endl;

  cout<<&p1<<endl;
  cout<<p2<<endl;

  return 0;
}*/
////////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

void update1(int **p2)
{
  //p2 = p2 + 1;//Nothing changes
  //*p2 = *p2 + 1;//changes address of i
  **p2 = **p2 + 1;//changes value of i
}

int main()
{
  int i = 5;
  int* p1 = &i;
  int** p2 = &p1;

  cout<<"Before "<<i<<endl;
  cout<<"Before "<<p1<<endl;
  cout<<"Before "<<p2<<endl;
  update1(p2);
  cout<<"After "<<i<<endl;
  cout<<"After "<<p1<<endl;
  cout<<"After "<<p2<<endl;


  return 0;
}*/
///////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

int main()
{
  int first = 8;
  int second = 18;
  int *ptr = &second;
  *ptr = 9;
  cout<<first<<" "<<second<<endl;


  int* p = &first;
  int* q = p;
  (*q)++;
  cout<< first <<endl;
  cout<< (*p)++ <<endl;
  cout<< first <<endl;

  int arr[6] = {11,21,31,55};
  int *r = arr;
  cout<< r[2] <<endl;
  cout<< *(arr + 2)<<endl;

  //int *po = (arr)++;//error because we updated the symbol table:
  int *po = arr;
  po++;
  cout<< *po <<endl;

  char ch = 'a';
  char* pon = &ch;
  ch++;
  cout<< *pon <<endl;

  char character[6] = "abcde";
  char *prr = &character[0];
  cout<< prr <<endl;

  char list[6] = "abcde";
  char *pnr = list;
  pnr++;
  pnr++;
  cout<< pnr <<endl;

  return 0;
}
