#include <iostream>
using namespace std;

int factorial(int num)
{
    int factorial = 1;
    if(num == 0 || num == 1)
        return factorial;
    
    for(int i=2; i<=num; i++)
     factorial = factorial *  i;
    
    return factorial;
}

int main()
{
    int num;
    cin>>num;

    cout<<"Factorial of "<<num<<" is "<<factorial(num);

    return 0;
}