///////////////////////////////////////////////////////////////////////////////
////////(String)///////////////////////////////////////////
////////(Reversing a string)///////////////
/*#include<iostream>
using namespace std;

void reversestr(char ch[], int n){
  int s = 0;
  int e = n-1;
  while(s<=e){
    swap(ch[s++], ch[e--]);
  }
}

int lengthstr(char ch[]){
  int count = 0;
  for(int i = 0; ch[i]!='\0'; i++){
    count++;
  }
  return count;
}

int main(){
  char name[20];

  cout<<"Enter your name "<<endl;
  cin>>name;//cin doesn't accept spcaebar, enter or tab

  cout<<"Your name is "<<name<<endl;
  int len = lengthstr(name);
  cout<<"Length of the string is "<<len<<endl;

  reversestr(name, len);
  cout<<"After reversing the name "<<name<<endl;;
}*/
////////////////////////////////////////////////////////////////////////////////
//////////////(Palindrome or not)/////////////////////////////////////////////
/*#include<iostream>
using namespace std;

bool checkpalindrome(char ch[], int n){
  int s = 0;
  int e = n-1;
  while(s<=e){
    if(ch[s]!=ch[e]){
      return 0;
    }
    else{
      s++;
      e--;
    }
  }
  return 1;
}

int getlength(char ch[]){
  int count = 0;
  for(int i=0; ch[i]!='\0'; i++){
    count++;
  }
  return count;
}

int main(){
  char character[10];
  cout<<"Enter your name ";
  cin>>character;

  int len = getlength(character);

  cout<<"check if it is Palindrome or not "<<checkpalindrome(character, len);
}*/
///////////////////////////////////////////////////////////////////////////////
///////////////(Non-case sensitive Palindrome)/////////////////
/*#include<iostream>
using namespace std;

char lowercase(char ch){
  if(ch>='a' && ch<='z'){
    return ch;
  }
  else{
    char temp = ch - 'A' + 'a';
    return temp;
  }
}

int getlength(char ch[]){
  int count = 0;
  for(int i=0; ch[i]!='\0'; i++){
    count++;
  }
  return count;
}


bool checkpalindrome(char ch[], int n){
  n = getlength(ch);
  int s = 0, e = n-1;
  while(s<=e){
    if(lowercase(ch[s])!=lowercase(ch[e])){
      return 0;
    }
    else{
      s++;
      e--;
    }
  }
  return 1;
}

int main(){
  char character[10] = "NOon";

  int n = getlength(character);

  cout<<"Palindrome or not "<<checkpalindrome(character, n);
}*/
////////////////////////////////////////////////////////////////////////////////
///////(check Plaindrome ignore special special character)//////////
/*#include<iostream>
using namespace std;

bool valid(char ch){
  if((ch>='a' && ch<='z') || (ch>='0' && ch<='9') || (ch>='A' && ch<='Z')){
    return 1;
  }
  return 0;
}

char lowercase(char ch){
  if(ch>='a' && ch<='z'){
    return ch;
  }
  else{
    char temp = ch - 'A' + 'a';
    return temp;
  }
}

bool checkpalindrome(string str){
  int s = 0, e = str.length()-1;
  while(s<=e){
    if(lowercase(str[s])!=lowercase(str[e])){
      return 0;
    }
    else{
      s++;
      e--;
    }
  }
  return 1;
}


int main(){
  string s = "A man, a plan, a canal: Panama";
  cout<<"String is=> "<<s<<endl;
  string temp = "";

  for(int i = 0; i<s.length(); i++){
    if(valid(s[i])){
      temp.push_back(s[i]);
    }
  }

  cout<<"Valid string is => "<<temp<<endl;

  cout<<"Plaindrome or not "<<checkpalindrome(temp);
}*/
////////////////////////////////////////////////////////////////////////////////
////////(Check for maximum occuring character)////////////////////
/*#include<iostream>
using namespace std;

char maxoccuringchar(string s){
  char alph[26] = {0};//making the array null is important
  int num = 0;
  for(int i = 0; i<s.length(); i++){
    if(s[i]>='a' && s[i]<='z'){//For lowercase
      num = s[i] - 'a';
    }
    else if(s[i]>='A' && s[i]<='Z'){
      num = s[i] - 'A';
    }
    alph[num]++;
  }

  int maxi = -1, ans = 0;
  for(int i = 0; i<26; i++){
    if(alph[i]>maxi){
      maxi = alph[i];
      ans = i;
    }
  }
  char maxchar = ans + 'a';
  return maxchar;
}

int main(){
  cout<<"Enter the the string ";
  string s;
  cin>>s;

  cout<<"Max occuring character is "<<maxoccuringchar(s)<<endl;
}*/
///////////////////////////////////////////////////////////////////////////////
////////(Replace spaces)///////////////////////
/*#include<iostream>
using namespace std;

string replacespace(string str){
  string temp = "";
  for(int i = 0; i<str.length(); i++){
    if(str[i]==' '){
      temp.push_back('@');
      temp.push_back('4');
      temp.push_back('0');
    }
    else{
      temp.push_back(str[i]);
    }
  }
  return temp;
}

int main(){
  string s = "My name is Priyanshu Shukla";

  cout<<"New string is-> "<<endl;
  cout<<replacespace(s);
}*/
///////////////////////////////////////////////////////////////////////////////
////////////(Erase part of the string)//////////////////////////////
/*#include<iostream>
using namespace std;

string Erased(string str, string part){
  while(str.length()!=0 && str.find(part)<str.length()){
    str.erase(str.find(part), part.length());
  }
  return str;
}

int main(){
  string s = "daabcbaabcbc";
  string part = "abc";

  cout<<"String is intially "<<s<<endl;
  cout<<"Part is "<<part<<endl;

  cout<<Erased(s, part);
}*/
