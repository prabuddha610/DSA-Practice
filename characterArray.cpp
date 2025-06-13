#include <iostream>
using namespace std;

int main(){
    char str[100];

    cout << "Enter char array: ";
    cin.getline(str, 100,'$'); // reads until $ is encountered

    cout << "output: " << str << endl;
    return 0;
}
