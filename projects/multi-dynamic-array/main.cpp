#include <iostream>
#include <iomanip>

using namespace std;

typedef int* IntArrayPointer ;

int main() {
    const int len1 = 5, len2 = 4;
    auto *arr = new IntArrayPointer[len1];
    int i, j;
    for (i = 0; i < len1; i++) {
        arr[i] = new int[len2];
    }
    for (i = 0; i < len1; i++) {
        for (j = 0; j < len2; j++) {
            arr[i][j] = i*len2+j;
        }
    }
    for (i = 0; i < len1; i++) {
        for (j = 0; j < len2; j++) {
            cout << setw(5) << arr[i][j] << " ";
        }
        cout << endl;
    }
    // 注意释放的方法
    for (i = 0; i < len1; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
