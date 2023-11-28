//////////////////////////////////////////////////////////////////////////////////////
//////////(Swap does not work on strings as they are immutable)//////////
/*#include<iostream>
using namespace std;

int lengthstr(string str)
{
  int count = 0;
  for(int i = 0; str[i]!='\0'; i++){
    count++;
  }

  return count;
}

string reverse(string characters, int n)
{
  int s = 0;
  int e = n-1;
  while( s >= e ){
    swap(characters[s++], characters[e--]);
  }

  return characters;
}

int main()
{
  string str = "hello";
  int len = lengthstr(str);

  cout<<reverse(str, len);
}*/
///////////////////////////////////////////////////////////////////////////////////////
//////(Some function on string )//////
/*#include<iostream>
#include<string>
using namespace std;

int main()
{
  string str = "hello";
  cout<< "Size of string." <<str.size()<<endl;//Means String is a class
  cout<< "length of string." <<str.length()<<endl;
  cout<< "capacity of string."<< str.capacity();
}*/
//////////////////////////////////////////////////////////////////////////////////////////////
////(First Letter of word to Upper case)///////////////////
/*#include<bits/stdc++.h>
using namespace std;

string convertstring(string str)
{
  int n = str.length();
  for(int i = 0; i<n; i++){
    if(i == 0){
      str[i] = toupper(str[i]);
    }
    if(str[i] == ' '){
      int a = (str[i+1] - 'a') + 'A';
      char b = a;
      str[i+1] = b;
      i++;
    }
  }
  return str;
}

int main()
{
  string str = "i am priyanshu shukla.";

  cout<< convertstring(str);
}*/
/////////////(Using only Type casting)/////////////////////////////////////////
/*#include<bits/stdc++.h>
using namespace std;

string capitalize(string str)
{int i = 0;
  int r = str[0];
  if(r > 90 && i == 0){
    int k = (str[0] - 'a') + 'A';
    char k2 = k;
    str[0] = k2;
    i++;
  }

  for(int i = 0; i < str.length(); i++){
    if(str[i] == ' '){
      int a = (str[i+1] - 'a') + 'A';
      char b = a;
      str[i+1] = b;
      i++;
    }
  }
  return str;
}

int main()
{
  string str = "i am priyanshu.";
  cout<< capitalize(str);
}*/
////////////////////////////////////////////////////////////////////////////////////////////
////////
/*#include<bits/stdc++.h>
using namespace std;

string countchar(string str){
  string ok = "";
  for(int i = 0; i < str.length();){
    int cnt = 1;
    int j = i+1;
    while(str[i] == str[j]){
      cnt++;
      j++;
    }
    int num = '0' + cnt;
    char n = num;
    ok = ok + str[i] + n;

    i = i+cnt;
  }

  return ok;
}

int main()
{
  string str;
  cin>>str;

  cout<< countchar(str);

  return 0;
}*/
/////////////////////////////////////////////////////////////////////////////////////////
/*#include<bits/stdc++.h>
using namespace std;

string encode(string str){
  string ans = "";
  int cnt = 1;
  for(int i = 0; i < str.length(); i++){
    if(str[i] == str[i+1]){
      cnt++;
    }
    else{
      ans += str[i] + to_string(cnt);
      cnt = 1;
    }
  }
  return ans;
}

int main(){
  string str;
  getline(cin, str);

  cout<< encode(str);
}*/
////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

string removevowel(string str){
  string ans = "";
  for(int i = 0; i < str.length(); i++){
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
      ans += "";
    }
    else{
      ans+= str[i];
    }
  }
  return ans;
}

int main(){
  string str;
  getline(cin, str);

  cout<< removevowel(str);
}
