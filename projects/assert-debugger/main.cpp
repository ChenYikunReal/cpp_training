// 使用#define NDEBUG可无效化assert

#include <iostream>
#include <cassert>

using namespace std;

double newtonSqroot(double n, int numIterations) {
    double answer = 1;
    int i = 0;
    assert((n>0) && (numIterations>0));
    while (i < numIterations) {
        answer = 0.5*(answer+n/answer);
        i++;
    }
    return answer;
}

int main() {
    newtonSqroot(-1, -1);
    return 0;
}
