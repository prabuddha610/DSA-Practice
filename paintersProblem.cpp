/* Given an array/list of length ‘N’, where the array/list represents the boards and each element of the given array/list represents the length of each board. Some ‘K’ numbers of painters are available to paint these boards. Consider that each unit of a board takes 1 unit of time to paint. You are supposed to return the area of the minimum time to get this job done of painting all the ‘N’ boards under the constraint that any painter will only paint the continuous sections of boards.*/

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