#include <iostream>//D
using namespace std;

int main() {
    int d;
    cin >> d;

    int h = d / 30;
    
    int last = d % 30;
    
    int minutes = (last * 60) / 30; 

    cout << "It is " << h<< " hours " << minutes << " minutes." << endl;

    return 0;
}
