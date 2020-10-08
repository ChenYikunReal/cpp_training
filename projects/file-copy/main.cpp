#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {
    ifstream inStream;
    ofstream outStream;
    inStream.open("input.txt");
    if (inStream.fail()) {
        cout << "输入文件打开失败";
        exit(1);
    }
    // 追加
    outStream.open("output.txt", ios::app);
    if (outStream.fail()) {
        cout << "输出文件打开失败";
        inStream.close();
        exit(1);
    }
    string temp;
    while (getline(inStream,temp)) {
        cout << temp << endl;
        outStream << temp << endl;
    }
    inStream.close();
    outStream.close();
    return 0;
}
