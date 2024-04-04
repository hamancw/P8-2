#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int countWords(string str) {
    stringstream ss(str);
    string word;
    int count = 0;
    while (ss >> word) {
        count++;
    }
    return count;
}

int main() {
    string input;
    cout << "Enter a string or Q to quit: ";
    getline(cin, input);

    int wordCount = countWords(input);
    cout << "Word count: " << wordCount << endl;
}