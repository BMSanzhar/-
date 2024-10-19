#include <iostream>//Коровы
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n >= 100) {
        return 0;
    }

    
    if (n % 10 == 1 && n % 100 != 11) {
        cout << n << " korova";
    } 
    else if ((n % 10 >= 2 && n % 10 <= 4) && !(n % 100 >= 12 && n % 100 <= 14)) {
        cout << n << " korovy";
    } 
   
    else {
        cout << n << " korov";
    }

    return 0;
}
