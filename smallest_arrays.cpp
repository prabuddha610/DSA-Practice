#include<iostream>
using namespace std;

int main(){
    int nums[]={5,15,10,-34,2,89};
    int size = 6;

    int smallest;

    for(int i=0;i<size;i++){
        if(nums[i] < smallest){
            smallest = nums[i]; // or  smallest = min(nums[i],smallest);
        }
    }

    cout<<"Smallest = " << smallest << endl;
    return 0;
}