/* Given an array ‘arr of integer numbers, ‘arr[i]’ represents the number of pages in the ‘i-th’ book. There are a ‘m’ number of students, and the task is to allocate all the books to the students.
Allocate books in such a way that:

Each student gets at least one book.
Each book should be allocated to only one student.
Book allocation should be in a contiguous manner.
You have to allocate the book to ‘m’ students such that the maximum number of pages assigned to a student is minimum. If the allocation of books is not possible. return -1  */

#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int maxAllowedTime)
{ // O(n)
    int painters = 1, time =0;

    for(int i=0; i<n ; i++){
        if(time + arr[i] <= maxAllowedTime){
            time += arr[i];
        }else{
            painters ++;
            time = arr[i];
        }
    }
    return painters <= m;
}

int minTimeToPaint(vector<int> &arr, int n, int m){ // O(log(sum) * n)
    int sum = 0, maxVal = INT32_MIN;
    for(int i=0;i<n;i++){ // O(n)
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    int st = maxVal, end = sum, ans = -1;

    while(st <=end){ //log(sum)
        int mid = st + (end-st)/2;

        if(isPossible(arr,n,m, mid)){//left
            ans = mid;
            end = mid-1;
        }else{ // right
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {40,30,10,20};
    int n = 4, m = 2;

    cout << minTimeToPaint(arr, n, m) << endl;
    return 0;
}