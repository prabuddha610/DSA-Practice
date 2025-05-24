#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int maxSum = INT32_MIN; //// Start with smallest possible number
    for (int st = 0; st < n; st++)
    {
        int currSum = 0;
        for (int end = st; end < n; end++)
        {
            currSum += arr[end]; // Add next element to current subarray
            maxSum = max(currSum, maxSum); // Update best result
        }
    }
    cout << "Maximum Subarray Sum = "<< maxSum << endl;
    return 0;
}