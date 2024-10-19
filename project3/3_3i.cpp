#include <iostream>//Квадраты
#include <cmath> 
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int start = ceil(sqrt(a));
    int end = floor(sqrt(b));

    if (start > end) {
        return 0;
    }

    for (int i = start; i <= end; i++) {
        cout << i * i << " ";
    }

    return 0;
}
