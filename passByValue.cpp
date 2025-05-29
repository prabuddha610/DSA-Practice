#include <iostream>
#include <vector>
using namespace std;

void changeA(int a){
    a=20;
}

int main(){
    int a=10;

    changeA(a);
    cout<<"Inside main fxn: "<< a << endl;
    return 0;
}