#include <iostream>
using namespace std;

int binToDecimal(int binNum)
{
    int ans = 0, pow = 1;

    while (binNum > 0)
    {
        int rem = binNum % 10;
        binNum /= 10;

        ans += (rem * pow);
        pow *= 2;
    }
    return ans; // decimal form
}

int main()
{
    int binNum = 101;

    cout << binToDecimal(binNum) << endl;
    return 0;
}