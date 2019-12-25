#include<iostream>
using namespace std;
 void higher(int g,int h)
 {

     if(g>h)
     {
         cout<<"first number is greater";
     }
     else
     {
         cout<<"second number is greater";
     }
 }
 int main()
 {
     int t;
     cout<<"write a number: ";
     cin>>t;
     cout<<"write another number: ";
     int r;
     cin>>r;
     higher(t,r);
}
