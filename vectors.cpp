#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char> vec = {'a','b','c','d','e'};
    cout << "Size: " << vec.size() << endl;
    vec.push_back(25); // adds element to vector at the back
    cout << "After pushback size : "<< vec.size() << endl;
    vec.pop_back(); // deletes element from back ( no need to write index or value)
    cout << "After popback size : " << vec.size() << endl;
    cout << vec.front() << endl; // first value
    cout << vec.back() << endl; // last value
    cout << vec.at(1) << endl; // value at index

    for(char val:vec){
        cout << val << endl;
    }
    return 0;
}