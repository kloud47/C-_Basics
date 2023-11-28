//////(Reference variable: same memory different name)//////////////////////////
/*#include<iostream>
using namespace std;

int update(int &a)//reference varibale in function:
{
  a++;
}

int main()
{
  int i = 5;
  int &j = i;//Created a reference variable:

  cout<<i<<" "<<j<<endl;

  cout<<"Before update "<<i<<endl;
  update(i);
  cout<<"After update "<<i<<endl;
}*/
/////////////////////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

int main()
{
  int score = 200;
  int *ptr = &score;

  printf("Value of score is %d\n", score);
  printf("value of pointer is %p\n", ptr);

  int &ref_score = score;
  ref_score = 300;

  printf("Value of score is %d\n", score);
  printf("value of pointer is %p\n", ptr);

  return 0;
}*/

/////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

#define LOG(x) cout<< x <<endl

int main()
{
    /*int a = 5;
    int b = 8;

    int* ref = &a;
    *ref = 2;

    ref = &b;//changing the memory address:
    *ref = 1;

    LOG(a); LOG(b);*/

    int a = 8;
    int b = 10;

    int& ref = a;
    int& Ref = b;
    
    ref = Ref;//Changing reference:
    LOG(ref);
}