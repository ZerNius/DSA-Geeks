#include <iostream>
using namespace std;

bool isPalindrome(int num)
{
    int rev = 0;
    int x = num;
    while(x > 0)
    {
        rev = (rev*10) +  (x%10);
        x /= 10;
    }

    return (rev == num);
}

int main()
{
    int num;
    cin>>num;
    cout<<"Number a Palindrom?:\n"<<isPalindrome(num);
    return 0;
}