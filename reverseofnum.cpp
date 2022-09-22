#include<iostream>
using namespace std;

int main()
{
    int n,revnum=0,rem;

    cout<<"Enter a number";
    cin>>n;

    while (n!=0)
    {
        rem=n%10;

        revnum=revnum*10+rem;

        n=n/10;
    }

    cout<<"Reversed Number : "<<revnum;

    return 0;
}