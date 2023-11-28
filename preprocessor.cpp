/*#include<iostream>

#define INTEGER int

INTEGER main()
{
    INTEGER n = 20;
    std::cout<<"hello this is : "<< n << std::endl;

    #if 1
    std::cout<< n << std::endl;
    #endif

    #if 0 //Here following code will not be included:
    std::cout<< n << std::endl;
    #endif

    return 0;
}*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*#include<bits/stdc++.h>
/// wont sow output in GCC compilers:
void func1();
void func2();

#pragma startup func1

#pragma exit func2

void func1() { std::cout<< "Inside func1()\n"; }

void func2() { std::cout<< "Inside func2()\n"; }

int main()
{
    void func1();
    void func2();

    std::cout<<"Inside main()\n";

    return 0;
}*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

#define fori10 for(int i=0; i<10; i++)
#define LOG(x) cout<< x <<" "
#define n 1
#define plus num++

int main()
{
    int num = n;
    fori10
    {
        LOG(num);
        plus; 
    }
    cout<<endl;

    return 0;
}