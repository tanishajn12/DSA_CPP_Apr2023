#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void generateWords(string str, string original_str,string current, vector<string>& words) {
    // Base case: if all characters are used, add the current word to the result
    if (str.empty()) {
        words.push_back(current);
        return;
    }

    // Recursive case: try each character at the current position
    for (int i = 0; i < str.length(); i++) {
        string s = str.substr(0, i) + str.substr(i + 1);
        string next = current + str[i];
        generateWords(s,original_str, next, words);

        // Stop generating words if the current word is greater than or equal to the original string
        if (current + str[i] >= original_str) {
            break;
        }
    }   
}

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;

    string sortedstr=str;

    sort(sortedstr.begin(), sortedstr.end());

    vector<string> words;
    generateWords(sortedstr,str, "", words);

    for (string word : words) {
        if (word < str) {
            cout << word << endl;
        }
    }

    return 0;
}
