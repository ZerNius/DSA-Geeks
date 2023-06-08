#include <iostream>
using namespace std;

int sum(int n)
{
    return n * (n+1)/2;
}
int main()
{
    int n;
    cin>>n;

    cout<<"Sum of "<<n<<" is "<<sum(n);

    return 0;
}