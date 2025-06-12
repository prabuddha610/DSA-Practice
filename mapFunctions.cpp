#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    map<string, int> m;

    m["tv"] =100;
    m["laptop"] = 100;
    m["headphones"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;

    m.insert({"camera", 25});
    m.emplace("mobile", 75);

    for(auto p: m){
        cout << p.first << " " << p.second << endl;
    }


    m.erase("tv");

    if(m.find("camera") != m.end()){
        cout << "Found\n";
    }else{
        cout << "Not Found";
    }
    return 0;
}