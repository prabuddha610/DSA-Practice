#include <iostream>
using namespace std;

int main()
{
    int nums[] = {5, 15, 10, -34, 2, 89};
    int size = 6;

    int smallest = nums[0];
    int largest = nums[0];

    for (int i = 0; i < size; i++)
    {
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
    }

    cout << "Smallest = " << smallest << endl;
    cout << "Largest = " << largest << endl;
    return 0;
}