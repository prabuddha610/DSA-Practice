#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<pair<int,int>> vec ={{1,2}, {2,3}, {3,4}};

    vec.push_back({5,6});
    vec.emplace_back(6,7);

    for(auto p : vec){
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}