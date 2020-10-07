#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

int main() {
    const int TRIES = 10000000;
    srand(time(0));
    int hits = 0;
    for (int i = 1; i <= TRIES; i++) {
        double r = rand() * 1.0 / RAND_MAX;
        double x = -1 + 2 * r;
        r = rand() * 1.0 / RAND_MAX;
        double y = -1 + 2 * r;
        if (x * x + y * y <= 1) {
            hits++;
        }
    }
    double pi_estimate = 4.0 * hits / TRIES;
    cout << "Estimate for Pi: " << pi_estimate << endl;
    return 0;
}
