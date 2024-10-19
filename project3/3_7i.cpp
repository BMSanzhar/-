#include <iostream>//Сумма ста
using namespace std;

int main() {
    int number;
    long long sum = 0;

    for (int i = 0; i < 100; i++) {
        cin >> number;
        sum += number;
    }

    cout << sum;
    return 0;
}
