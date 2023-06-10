#include <iostream>
using namespace std;

void AllDivisors(int num)
{
    int i;
    for(i=1; i*i<num; i++)
    {
        if(num%i == 0)
            cout<<i<<endl;
    }

    if(i - (num/i) == 1)
        i--;

    for(; i>=1; i--)
    {
        if(num%i == 0)
            cout<<num/i<<endl;
    }
}

int main()
{
    int num;
    cin>>num;
    AllDivisors(num);

    return 0;
}