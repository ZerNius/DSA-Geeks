#include <iostream>
using namespace std;

int numOfDigits(int num)
{
    int ans = 0;
    while(num > 0 )
    {
        num = num/10;
        ans++;
    }
    return ans;
}

int main()
{
    int num;
    cin>>num;

    cout<<"Number of digits in "<<num<<" is "<<numOfDigits(num);
    return 0;
}