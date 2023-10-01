#include <iostream>
#include <math.h>
using namespace std;
double long dfact(double long n) {
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return 1;
    }
    return n * dfact(n - 2);
}
long double t(long double x) {
    long double zn = 0;
    long double ch = 0;
    for (int k = 0; k <= 10; k++) {
        ch = ch + (pow(x, 2 * k + 1) / dfact(2 * k + 1));
        zn = zn + (pow(x, 2 * k) / dfact(2 * k));
    }
    return ch / zn;
}
int main() {
    long double y;
    long double res;
    cin >> y;
    res = (7 * t(0.25) + 2 * t(1 + y)) / (6 - t(y * y - 1));
    cout << res;
    return 0;
}
