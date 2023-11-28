/*#include<iostream>
using namespace std;

void check(int n){
    if(n % 2 == 0){
        goto even;//Goto statement:
    }
    else{
        goto odd;
    }

even:
    printf("%d is evem", n);
    return;
odd:
    printf("%d is odd", n);
}


int main()
{
    int num = 25;
    check(num);

    return 0;
}*/
/////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
using namespace std;

void printnumber()
{
    int n = 1;
label:
    printf("%d ", n);
    n++;
    if(n <= 10){
        goto label;
    }
}

int main()
{
    printnumber();

    return 0;
}