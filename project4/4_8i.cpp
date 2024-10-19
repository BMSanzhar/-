#include <iostream>//Разные
#include <set>
using namespace std;

int main() {
    int N;
    cin >> N;
    set<int> unique_numbers; 

    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        unique_numbers.insert(num); 
    }

    cout << unique_numbers.size() << endl;

    return 0;
}
