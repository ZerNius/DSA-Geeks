//Euclidean Algorithm
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    else    
        gcd(b, a%b);
}

int main()
{
    int a, b;
    cin>>a>>b;
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b);

    return 0;    
}