#include <iostream>
using namespace std;

//Naive Approach, Do not work with larger factorial value due to overflow
class Solution{
    public:
    long long factorial(int N)
    {
        long long fact = 1;
        
        if(N == 0)
            return 1;
        
        for(int i=2; i<=N; i++)
            fact *= i;
        
        return fact;
    }
    
    int digitsInFactorial(int N)
    {
        long long fact = factorial(N);
        cout<<fact<<endl;
        int digits = 0;
        
        while(fact >0)
        {
            fact /=10;
            digits++;
        }
        return digits;
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
