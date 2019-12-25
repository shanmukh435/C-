#include<iostream>
using namespace std;

int add();
int subtract();
int multiply();
int divide();


int a=6,b=5;


int main()
{
    int f;
    f=add();
    int r;
    r=subtract();
    int g;
    g=multiply();
    int e;
    e=divide();
    cout<<"addition is"<<f<<endl;
    cout<<"subtraction is"<<r<<endl;
    cout<<"multiplication is"<<g<<endl;
    cout<<"division is"<<e<<endl;
}
int add()
{
    int c=a+b;
    return c;
}
int subtract()
{
    int c=a-b;
    return c;
}
int multiply()
{
    int c=a*b;
    return c;
}
int divide()
{
    int c=a/b;
    return c;
}
