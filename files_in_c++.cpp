////////////////(Writing in c++)/////////////////////////////////////////////////////////////
/*#include<iostream>
#include<fstream> // Header file for file handeling:
using namespace std;

int main()
{
  ofstream out("sample.txt");//Opening a file using a constructor
  cout<<"Enter your name: ";
  string name; int age;
  cin>>name>>age;

  out<<"My name is " + name;//Writing in file using a out<<operation:
  out<<"My age is " + age;
  return 0;
}*/
////////////////////////////////////////////////////////////////////////////////////////////////////
//////(taking the contents of the file)///////////
/*#include<iostream>
#include<fstream>
using namespace std;

int main()
{
  string str;

  ifstream in("sample2.txt");
  getline(in , str);
  cout<<str<<endl;
  getline(in , str);
  cout<<str;

  return 0;
}*/
///(System commands in c++)//////////////////////////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

int main()
{
  system("color b");
  system("date");
  for(int i = 0; i < 8; i++){
    static int cnt = 0;
    for(int j = 0; j <= i; j++){
      cout<< cnt <<" ";
      cnt++;
    }cout<<endl;
  }

  system("pause");

  return 0;
}*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

