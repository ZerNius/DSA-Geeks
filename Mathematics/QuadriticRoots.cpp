#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution 
{
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        vector<int> ans;
        
        double d = pow(b, 2) - 4 * a * c;
        d = sqrt(abs(d));
        ans.push_back((-b + d)/(2*a));
        ans.push_back((-b - d)/(2*a));
        
        return ans;
    }
};

int main() 
{

    int a, b, c;
    cin >> a >> b >> c;
    Solution ob;
    vector<int> roots = ob.quadraticRoots(a, b, c);
    if (roots.size() == 1 && roots[0] == -1)
        cout << "Imaginary";
    else
        for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
    cout << endl;

    return 0;
}
