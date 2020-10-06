#include <iostream>

using namespace std;

int * return_arr(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        arr[i]++;
    }
    return arr;
}

void arr_plus(int *arr, int len) {
    for (int i = 0; i < len; i++) {
        *(arr+i) = *(arr+i)+1;
    }
}

int main() {
    const int len = 10;
    int arr[len] = {2, 3, 4, 5, 6};
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    int *p = return_arr(arr, len);
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 0; i < len; i++) {
        cout << *(p+i) << " ";
    }
    cout << endl;

    cout << &arr << endl;

    arr_plus(arr, len);
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    cout << &arr << endl;
    return 0;
}
