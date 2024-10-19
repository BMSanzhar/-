#include <iostream>//a+b=c
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double sum = a + b;

    if (fabs(sum - c) < 1e-7) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
