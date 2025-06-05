/*  Given an array ‘arr of integer numbers, ‘arr[i]’ represents the number of pages in the ‘i-th’ book. There are a ‘m’ number of students, and the task is to allocate all the books to the students.
Allocate books in such a way that:

Each student gets at least one book.
Each book should be allocated to only one student.
Book allocation should be in a contiguous manner.
You have to allocate the book to ‘m’ students such that the maximum number of pages assigned to a student is minimum. If the allocation of books is not possible. return -1  */


#include <iostream>
#include <vector>
    using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages){
    int students=1,pages=0;

    for(int i=0;i<n;i++){
        if(arr[i] > maxAllowedPages){
            return false;
        }

        if(pages + arr[i] <= maxAllowedPages){
            pages += arr[i];
        }else{
            students++;
            pages = arr[i];
        }
    }
    return students > m ? false : true;
}

int allocateBooks(vector<int> &arr, int n, int m){ //O(logN + n)
    if(m >n){
        return -1;
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    int ans = -1;
    int st=0, end=sum; //range of possible ans

    while(st <= end){ // 0(n)
        int mid = st + (end-st)/2;

        if(isValid( arr,n,m,mid)){ //left
            ans = mid;
            end = mid -1;
        }else{ // right
            st = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {2,1,3,4};
    int n=4, m=2;

    cout << allocateBooks(arr,n,m) << endl;
    return 0 ;
}