#include <iostream>

using namespace std;

struct Point {
    double x, y;
};

/**
 * 值传递
 * @param p
 */
void changeX(Point p) {
    p.x++;
}

/**
 * 引用传递
 * @param p
 */
void changeY(Point &p) {
    p.y++;
}

int main() {
    Point p1 = {3.0, 4.0};
    Point p2;
    p2 = {3.0, 4.0};
    p2 = (Point) {4.0, 5.0};
    cout << p2.x << " " << p2.y << endl;
    changeX(p2);
    cout << p2.x << " " << p2.y << endl;
    changeY(p2);
    cout << p2.x << " " << p2.y << endl;
    return 0;
}
