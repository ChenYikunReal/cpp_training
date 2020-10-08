#include <iostream>

using namespace std;

int main() {
    char a = 'a', b = 'B', c = '2', d = '\t', e = ' ';
    // 不强转就输出数值
    cout << (char)toupper(a) << endl;
    cout << (char)tolower(b) << endl;
    cout << isupper(a) << endl;
    cout << islower(b) << endl;
    cout << isalpha(a) << endl;
    cout << isalpha(c) << endl;
    cout << isdigit(a) << endl;
    cout << isdigit(c) << endl;
    cout << isspace(a) << endl;
    cout << isspace(d) << endl;
    cout << isspace(e) << endl;
    return 0;
}
