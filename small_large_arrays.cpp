#include <iostream>
using namespace std;

int main()
{
    int nums[] = {5, 15, 10, -34, 2, 89};
    int size = 6;

    int smallest = INT32_MAX; // Biggest possible integer (~2 billion)
    int largest = INT32_MIN;  // Smallest possible integer (~-2 billion)

    for (int i = 0; i < size; i++)
    {
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
    }

    cout << "Smallest = " << smallest << endl;
    cout << "Largest = " << largest << endl;
    return 0;
}