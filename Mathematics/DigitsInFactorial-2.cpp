#include <iostream>
#include <cmath>
using namespace std;

class Solution{
    public:
    int digitsInFactorial(int N)
    {
        double digits = 0;
        
        for(int i=2; i<=N; i++)
        {
            digits += log10(i);
        }
            
        return floor(digits) + 1;
    }
};

int main()
{
    int N;
    cin>>N;
    Solution ob;
    cout<<ob.digitsInFactorial(N)<<endl;

    return 0;
}
