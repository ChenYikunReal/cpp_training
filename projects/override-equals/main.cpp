#include <iostream>

using namespace std;

struct Grade {
    int chinese, math, english;
    bool equals(Grade grade);
};

bool Grade::equals(Grade grade) {
    return this->chinese == grade.chinese && this->math == grade.math && this->english == grade.english;
}

int main() {
    Grade grade1 = {100, 99, 98}, grade2 = {20,30, 40}, grade3 = {100, 99, 98};
    cout << grade1.equals(grade2) << " " << grade1.equals(grade3) << endl;
    return 0;
}
