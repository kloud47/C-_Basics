///////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

int main()
{
  int num = 5;
  cout<<num<<endl;

  cout<<"Address of the num is "<<&num<<endl;
  //Data type of pointer is same as that of a variable.

  int *ptr = &num;
  cout<<"Value stored by pointer is "<<*ptr<<endl;//Prints value at the given address
  cout<<"Value stored by pointer is "<<ptr<<endl;//prints the address

  double dub = 3.33;
  double *p = &dub;

  cout<<*p<<endl;
  cout<<p<<endl;

  cout<<"Size of integer is "<<sizeof(num)<<endl;
  cout<<"Size of pointer is "<<sizeof(ptr)<<endl;
  cout<<"Size of double is "<<sizeof(dub)<<endl;
  cout<<"Size of pointer is "<<sizeof(p)<<endl;
}*/
////////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

int main()
{
  //pointer is created and is pointing to some garbage value:
  int *k;
  cout<<k<<endl;

  int i = 9;

  int *p = 0;//Another format to make pointer->dont leave pointer without a value:
  p = &i;

  cout<<*p<<endl;
}*/
////////////////(Copying a Pointer)////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

int main()
{
  int num = 5;
  int a = num;
  a++;
  cout<<num<<endl;

  int *p = &num;
  (*p)++;
  cout<<*p<<endl;

  int *q = p;//Now they both have same addresses
  cout<<p<<" - "<<q<<endl;
  cout<<*p<<" - "<<*q<<endl;

  int i = 3;
  int *t = &i;
  *t = *t + 1;
  cout<<*t<<endl;
  cout<<"Before t "<<t<<endl;
  t = t + 1;
  cout<<"After t "<<t<<endl;//pointer increases by 4 byte:
  t = t - 1;
  cout<<t<<endl;
  t = t - 1;
  cout<<t<<endl;
  return 0;
}*/
////////////////////////////////////////////////////////////////////////////////
////////(Pointers Array)////////////////////////
/*#include<iostream>
using namespace std;

int main()
{
  int arr[10] = {2,5,6,7,8,1};
  cout<<"Addres of the first memory block is "<<arr<<endl;
  cout<< &arr[0]<<endl;
  cout<<*arr<<" Prints the value present at 0th index"<<endl;
  cout<<*arr + 1<<endl;
  cout<<*(arr + 1)<<endl;//pointers moves forward by 4 byte:
  cout<<*(arr + 2)<<endl;//pointers move forward by 8 byte:

  //i[arr] = *(i + arr)
  cout<<3[arr]<<endl;
  cout<<0[arr]<<endl;
  cout<<2[arr]<<endl;

  cout<<&arr[1]<<endl;
  cout<<&arr[2]<<endl;

  return 0;
}*/
////////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

int main()
{
  int temp[10];
  int *ptr = &temp[0];

  cout<<sizeof(temp)<<endl;
  cout<<sizeof(*temp)<<endl;
  cout<<sizeof(&temp)<<endl;
  cout<<sizeof(ptr)<<endl;
  cout<<sizeof(*ptr)<<endl;

  return 0;
}*/
////////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

int main()
{
  int a[20] = {1,2,3,4};
  cout<<&a[0]<<endl;
  cout<<&a<<endl;
  cout<<a<<endl;

  int *p = &a[0];
  cout<<p<<endl;
  cout<<*p<<endl;
  cout<<&p<<endl;

  return 0;
}*/
////////////////////////////////////////////////////////////////////////////////
//////////(pointers char array)///////////
/*#include<iostream>
using namespace std;

int main()
{
  int arr[5] = {1,2,3,4,5};
  char ch[6] = "abcdf";//cout works differently for char

  cout<<ch<<endl;//Prints entire string

  char *c = &ch[0];
  cout<<c<<endl;//Prints entire string

  char temp = 'k';
  char *p = &temp;
  cout<<p<<endl;
}*/
////////////////////////////////////////////////////////////////////////////////
////////(pointers and functions)/////////////////////
/*#include<iostream>
using namespace std;

void print(int *p)
{
  cout<<p<<endl;
}

void update1(int *p)
{
  p = p + 1;
}

void update2(int *p)
{
  p = p + 1;
  cout<<p;
}

void update3(int *p)
{
  *p = *p + 1;
}

int main()
{
  int value = 3;
  int *p = &value;

  cout<<"Before update ";
  print(p);
  update1(p);//function does not change the address:
  cout<<"After update1 ";
  print(p);
  cout<<"After update2 ";
  update2(p);
  cout<<"\nAfter update3 ";
  update3(p);//Updating value:
  cout<<*p;

}*/
////////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

int getsum(int arr[], int n)//array goes inside a function as a pointer:
{
  cout<<"Size: "<<sizeof(arr)<<endl;//gives the pointer size:

  int sum = 0;
  for(int i = 0; i<n; i++){
    sum += i[arr];
  }
  return sum;
}


int main()
{
  int arr[5] = {1,2,3,4,5};

  cout<<"Sum is "<<getsum(arr, 5)<<endl;
}*/
////////////////////////////////////////////////////////////////////////////////
///////(Getting sum of array after a certain inidex)////////////////
/*#include<iostream>
using namespace std;

int getsum(int arr[], int size)
{
  int sum = 0;
  for(int i = 0; i<size; i++){
    sum += arr[i];
  }
  return sum;
}

int main()
{
  int arr[5] = {1,2,3,4,5};

  cout<<"Starting index is ";
  int n;
  cin>>n;
  cout<<"\nSum of array-> "<<getsum(arr + n, 5-n);
}*/
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////(Pointer arithmetic)///////////////////////////////////
/*#include<iostream>
using namespace std;

int MAX = 3;//Global variable:

int main()
{
  int var[] = {11, 12, 13};
  int i=0, *ptr;

  ptr = var;

  while( ptr <= &var[MAX-1] ){// relational operation in pointers:
    cout<< "Address of var "<<i<<" "<<ptr<<'\t';
    cout<< "Value of var "<<i<<" "<<*ptr<<endl;
    ptr++;
    i++;
  }

  cout<<ptr+1<<endl;//Addition:
  cout<<ptr<<endl;
  cout<<ptr-1<<endl;//Subtraction:

  return 0;
}*/
/////////(Pointer subtraction)///////////////////////////////////////////////////
#include<iostream>
using namespace std;

int main()
{
  int x = 6;
  int y = 7;

  int *ptr1 = &x; cout<<ptr1<<endl;
  int *ptr2 = &y; cout<<ptr2<<endl;

  cout<< ptr1 - ptr2;
}
//////////////////////////////////////////////////////////////////////////////////
