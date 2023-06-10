#include <iostream>
using namespace std;

int TrailingZero(int num)
{
    int ans = 0;
    for(int i=5; i<=num; i = i*5)
    {
        ans = ans + num/i;
    }
    return ans;
}
int main()
{
    int num;
    cin>>num;

    cout<<"Number of trailing zeroes in factorial of "<<num<<" is "<<TrailingZero(num);
    return 0;
}