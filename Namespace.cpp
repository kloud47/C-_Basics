/*#include<iostream>
using std::cout;

int main(){
    cout<<"Enter any number: ";
    int n;
    std::cin >> n;

    return 0;
}
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
#include<iostream>
using std::cout;
using std::cin;

int main(){
    cout<<"Enter any number: ";
    int n;
    cin >> n;

    return 0;
}
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
#include<algorithm>

namespace apple{
    void print(const std::string& text)
    {
        std::cout<< text <<std::endl;
    }
}

namespace oranges{
    void print(const char* text)
    {
        std::string temp = text;
        std::reverse(temp.begin(), temp.end());
        std::cout<< temp << std::endl;
    }
}

using namespace apple;

int main()
{
    // apple::print("This is namespace.");
    print("This is using namespace.");
    std::string str = "hello";
    char *ptr = str;
    oranges::print(ptr);

    return 0;
}*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
// using namespace std;

void Log(const char* message);

namespace sttd{
    ok(int a){
        std::cout<< a <<std::endl;
    }
}

int  main()
{
    // Log("Hello World!");
    int n; std::cin>>n;

    sttd::ok(9);

    return 0;
}
