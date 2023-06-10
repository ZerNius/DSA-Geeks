#include <iostream>
using namespace std;

int Power(int base, int pow)
{
    int res = 1;

    while(pow > 0)
    {
        if(pow%2 != 0 )
            res = res * base;
        base = base * base;
        pow /= 2;
    }
    return res;
}

int main()
{
    int base, pow;
    cin>>base>>pow;
    
    cout<<Power(base, pow);

    return 0;
}