#include <iostream>//Мороженое
using namespace std;
int main(){
    int k;
    cin >> k;

    bool possible = false;
    
    for (int i = 0; i <= k / 5; i++) {
        int remainder = k - i * 5;
        if (remainder % 3 == 0) {
            possible = true;
            break;
        }
    }

    if (possible) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
