#include <iostream>//Количество слов
#include <string>
#include <sstream>

using namespace std;

int main() {
    string line;
    
    getline(cin, line);
    
    stringstream ss(line);
    string word;
    
    int wordCount = 0;
    
    while (ss >> word) {
        wordCount++;
    }
    
    cout << wordCount << endl;
    
    return 0;
}
