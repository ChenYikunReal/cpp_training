#include <iostream>

using namespace std;

/**
 * 设置默认参数
 * @param a
 * @param b
 * @param c
 * @param d
 * @return
 */
int calculate(int a, int b, int c=3, int d=4) {
    return (a+b)*c/d;
}

int main() {
    cout << calculate(1, 3) << endl << calculate(1, 2, 3, 3) << endl;
    return 0;
}
