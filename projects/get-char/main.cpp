#include <iostream>

using namespace std;

int main() {
    char symbol;
    do {
        cin.get(symbol);
        cout << symbol;
    } while (symbol != '\n');
    return 0;
}
