#include <iostream>//Минимальный делитель
#include <cmath>
using namespace std;

int main() {
    int x;
    cin >> x;

    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            cout << i;
            return 0;
        }
    }

    cout << x;

    return 0;
}
