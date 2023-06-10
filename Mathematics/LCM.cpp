// LCM(a, b) = (a * b)/GCD(a, b)

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    else
        gcd(b, a%b);
}

int LCM(int a, int b)
{
    return (a*b)/gcd(a,b);
}

int main()
{
    int a , b;
    cin>>a>>b;

    cout<<"LCM of "<<a<<" and "<<b<<" is "<<LCM(a, b);

    return 0;
}