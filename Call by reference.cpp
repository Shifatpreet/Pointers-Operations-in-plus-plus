#include <iostream>
using namespace std;

void addTen(int x) {
    x = x + 10;   
    cout << "Inside function: x = " << x << endl;
}

int main() {
    int num = 5;

    cout << "Before function call: num = " << num << endl;
    addTen(num);   
    cout << "After function call: num = " << num << endl;

    return 0;
}
