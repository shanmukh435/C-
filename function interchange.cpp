#include<iostream>
using namespace std;
void inter(int b,int j)
{
    int temp;
    temp=b;
    b=j;
    j=temp;
    cout<<"after swapping, a= "<<b<<endl;
    cout<<"b= "<<j;
}
int main()
{
    int d;
    cout<<"type for a: ";
    cin>>d;
    int k;
    cout<<"type for b: ";
    cin>>k;
    inter(d,k);
}
