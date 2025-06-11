#include <iostream>
#include <vector>
using namespace std;

int main(){
    pair<int, pair<int,char>> p = {1, {4,'a'}};

    cout << p.first << endl;
    cout << p.second.first << endl;
    cout << p.second.second << endl;
    return 0;
}