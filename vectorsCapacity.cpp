#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);

    cout << "Size: " << vec.size() << endl; // 3
    cout << "Capacity: " << vec.capacity() << endl; // 4

    vec.push_back(3);
    vec.push_back(4);
    cout << "Size: " << vec.size() << endl; // 5
    cout << "Capacity: " << vec.capacity() << endl; // 8 --> vector doubles itself if all initialised space id occupied
    return 0;
}