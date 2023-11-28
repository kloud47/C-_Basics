/*#include<iostream>
using namespace std;

int main()
{
  float fl = 47.67f;
  long double d = 345.56l;

  cout<<"The value of float is ("<<fl<<") The value of long double is ("<<d<<")";

  cout<< sizeof(3.4)<<endl;
  cout<< sizeof(232.443f)<<endl;
  cout<< sizeof(233.3l)<<endl;//long double has 8 byte size:

  return 0;
}*/
///(Static cast)////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

int main()
{
    int num1 = 7, num2 = 2;
    float result;
    cout << "This is Implicit conversion." <<endl;
    cout << "Result: "<< num1 / num2 <<endl;

    cout << "This i explicit conversion." <<endl;
    result = (float)num1/num2;
    cout << "Result: "<< result <<endl;

    double multiply = 3.6 * 1.7;
    int ans;

    ans = static_cast <int> (multiply);
    cout << "Result: " << ans;

    return 0;
}*/
//(/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

int main()
{
  int a = 7, b = 2;
  float c = (float)a/b;
  cout<< c;
}