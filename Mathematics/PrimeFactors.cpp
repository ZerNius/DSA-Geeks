#include <iostream>
using namespace std;

void PrimeFactors(int num)
{
    if(num <=1) return;

    //for 2
    while(num%2 == 0 )
    {
        cout<<"2 ";
        num /= 2;
    }

    //for 3
    while(num%3 == 0)
    {
        cout<<"3 ";
        num /= 3;
    }

    //for rest
    for(int i=5; i*i<=num; i= i+6)
    {
        while(num%i == 0)
        {
            cout<<i<<" ";
            num /= i;
        }
        while(num%(i+2) == 0)
        {
            cout<<i+2<<" ";
            num /= i+2;
        }
    }

    //Last Prime
    if(num > 3)
        cout<<num<<" "; 
}

int main()
{
    int num;
    cin>>num;
    PrimeFactors(num);
    return 0;
}