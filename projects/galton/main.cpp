#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

// 高尔顿板
int main() {
    srand(time(0));
    const int SIZE = 10;
    int* counts[SIZE];
    // 按行分配
    for (int i = 0; i < SIZE; i++) {
        counts[i] = new int[i+1];
        for (int j = 0; j <= i; j++) {
            counts[i][j] = 0;
        }
    }
    const int RUNS = 1000;
    // 模拟1000个小球
    for (int run = 0; run < RUNS; run++) {
        // 在最顶上增加一个球
        counts[0][0]++;
        // 令小球运动至底部
        int j = 0;
        for (int i = 1; i < 10; i++) {
            int r = rand() % 2;
            // 如果r是偶数，向下；否则向右
            if (r == 1) {
                j++;
            }
            counts[i][j]++;
        }
    }
    // 打印所有counts值
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j <= i; j++) {
            cout << setw(4) << counts[i][j];
        }
        cout << endl;
    }
    // 释放每行的counts
    for (auto & count : counts) {
        delete[] count;
    }
    return 0;
}
