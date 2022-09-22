#include<iostream>
using namespace std;

int main()
{
    int n,rem,sum=0,temp;

    cout<<"Enter a number";
    cin>>n;

    temp=n;

    while (n>0)
    {
        rem=n%10;

        sum=(sum*10)+rem;
        n=n/10;
    }
    if(temp==sum)
        cout<<"Entered number is Palindrome";
    else
        cout<<"Entered number is not Palindrome";

    return 0;
    
}