#include<iostream>
using namespace std;
void max(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c){
        cout<<"maximum is "<<a<<endl;
        }

        else{
            cout<<"maximum is "<<c<<endl;
        }
    }
    else if(b>c)
    {
        cout<<"maximum is "<<b<<endl;
    }
    else{
        cout<<"maximum is "<<c<<endl;
    }
}

void min(int a,int b,int c)
{
    if(a<b)
    {
        if(a<c)
        {
           cout<<"minimum is "<<a;
        }
        else{
            cout<<"minimum is "<<c;
            }
    }
    else if(b<c)
    {
        cout<<"minimum is "<<b;
    }
    else
    {
        cout<<"minimum is "<<c;
    }
}
int main()
{
    int a;
    cout<<"type a: ";
    cin>>a;
    int b;
    cout<<"type b: ";
    cin>>b;
    int c;
    cout<<"type c: ";
    cin>>c;
    max(a,b,c);
    min(a,b,c);

}
