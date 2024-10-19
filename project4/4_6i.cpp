#include <iostream>//Удалить пробелы
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);

    string result;
    bool spaceFound = false;

    for (char c : input) {
        if (c != ' ') {
            result += c;
            spaceFound = false;
        } else if (!spaceFound) {
            result += ' ';
            spaceFound = true;
        }
    }

    cout << result << endl;

    return 0;
}
