#include<iostream>
using namespace std;

int main()
{
    int n, rem, sum=0, temp;
    cout<<"Enter a number";
    cin>>n;

    temp=n;

    while(n>0)
    {
        rem=n%10;

        sum=sum+(rem*rem*rem);

        n=n/10;
        
    }
    if(temp==sum)
        cout<<"Entered number is an Armstrong number";
    else
        cout<<"Entered number is not an armstrong number";

    return 0;
}