#include <iostream>
using namespace std;

int power(int base, int pow)
{
    if(pow == 0)
        return 1;

    int temp = power(base, pow/2);
    temp = temp*temp;

    if(pow%2 == 0)
        return temp;
    else
        return temp * base;
}

int main()
{
    int base, pow;
    cin>>base>>pow;

    cout<<power(base, pow);

    return 0;
}