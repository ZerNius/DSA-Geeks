#include <iostream>
using namespace std;

bool Prime(int num)
{
    if(num == 1)   return false;
    if(num == 2 || num ==3 ) return true;
    if(num%2 == 0 || num%3 == 0) return false;

    for(int i=5; i*i<=num; i = i+6)
    {
        if(num%i ==0 || num%(i+2) == 0)
            return false;
    }
    return true;
}

int main()
{
    int num;
    cin>>num;
    if(Prime(num))
        cout<<"Number "<<num<<" is a Prime";
    else    
        cout<<"Number "<<num<<" is not a Prime";

    return 0;
}