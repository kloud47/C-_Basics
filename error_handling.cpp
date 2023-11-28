/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cin>>age;

    try
    {
        if(age >= 24){
            cout<<"You are allowed to drink alcohol."<<endl;
        }
        else{
            throw age;
        }
    }
    
    catch(int age)
    {
        cout<<"You are under age and not allowed to drink alcohol."<<endl;
        cout<<"Your age is "<<age<<endl;
    }

    return 0;

}*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

int main()
{
    int num, denum, output;

    cout<<"Please Enter the numbers to do division.";
    cin>>num>>denum;

    try
    {
        if(denum==0){
            throw denum;
        }
        else{
            output=num/denum;
        }
    }
    catch(int d)
    {
        cout<<"0 cant be a denominator in division."<<endl;
        cin>>denum;
        output=num/denum;
    }
    cout<< "Your output is. "<<output;

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
/*#include<iostream>
using namespace std;

int func(int x){
    return x;
}

int main()
{   
    string word = "Four";

    int x = 3;

    try
    {
        //cout<< word.at(4) <<endl;
        //throw func(3);
        throw 'c';
    }
    catch(out_of_range& e)
    {
        cout<<"First catch : "<<e.what()<<endl;
    }
    catch(bad_alloc& e)
    {
        cout<<"Second catch: "<<e.what()<<endl;
    }
    catch(int x)
    {
        cout<< "Third catch: "<< x <<endl;
    }
    catch(exception& e)
    {
        cout<< "Fourth catch: "<<e.what()<<endl;
    }
    catch(...)
    {
        cout<<"Default catch case!"<<endl;
    }

    return 0;
}*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///(Rethrow an exception)/////////////////////////////////////////////////////////////////////////
/*#include<iostream>
#include<stdexcept>
using namespace std;

void doSomthing(){
    cout<< "doSomething() called" <<endl;
    throw runtime_error("An error occurred in doSomething()");
}

void doSomethingElse(){
    cout<<"doSomethingElse() called"<<endl;
    try{
        doSomthing();
    }
    catch(exception& e){
        cout<< "Error cought in doSomthingElse(): "<< e.what() <<endl;
        throw;
    }
}

int main()
{
    try{
        doSomethingElse();
    }
    catch(exception& e){
        cout<<"Error caught in main(): "<< e.what() <<endl;
    }

    return 0;
}*/