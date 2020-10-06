#include <iostream>

using namespace std;

void swap1(int x, int y) {
    int temp = x;
    y = x;
    x = temp;
}

void swap2(int &x, int &y) {
    int temp = y;
    y = x;
    x = temp;
}

int main() {
    int x = 1, y = 2;
    cout << x << " " << y << endl;
    swap1(x, y);
    cout << x << " " << y << endl;
    swap2(x, y);
    cout << x << " " << y << endl;
    return 0;
}
