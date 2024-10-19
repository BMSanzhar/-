#include <iostream>//F
using namespace std;

int main() {
    int h1, m1, s1;
    int h2, m2, s2;
    
    cin >> h1 >> m1 >> s1;
    cin >> h2 >> m2 >> s2;

    int total1 = h1 * 3600 + m1 * 60 + s1;
    int total2 = h2 * 3600 + m2 * 60 + s2;

    int difference = total2 - total1;

    cout << difference << endl;

    return 0;
}
