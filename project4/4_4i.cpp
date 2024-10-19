#include <iostream>//кролики
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    long long max = (m + n - 1) / n;

    cout << max<< endl;

    return 0;
}
