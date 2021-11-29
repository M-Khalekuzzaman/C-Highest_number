#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter your three number is : ";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
            cout<<"High number is : "<<a<<endl;
        else
            cout<<"High number is : "<<c<<endl;
    }
    else
    {
        if(b>c)
            cout<<"High number is : "<<b<<endl;
        else
            cout<<"High number is : "<<c<<endl;
    }
    getch();
}
