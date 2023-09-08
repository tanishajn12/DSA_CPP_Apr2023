#include <iostream>
#include <vector>
using namespace std;

vector<string> getCodes(string str) {
    // Base case: if the string is empty, return an empty vector
    if (str.empty()) {
        vector<string> empty;
        return empty;
    }
  
    // Recursive case: get codes for the remaining string
    vector<string> codes;
    
    // Get codes for the first single-digit character
    int digit = str[0] - '0';
    if (digit >= 1 && digit <= 9) {
        char ch = 'a' + digit - 1;
        vector<string> subcodes = getCodes(str.substr(1));
        for (string code : subcodes) {
            codes.push_back(ch + code);
        }
    }
  
    // Get codes for the first two-digit character
    if (str.length() >= 2) {
        int twoDigits = stoi(str.substr(0, 2));
        if (twoDigits >= 10 && twoDigits <= 26) {
            char ch = 'a' + twoDigits - 1;
            vector<string> subcodes = getCodes(str.substr(2));
            for (string code : subcodes) {
                codes.push_back(ch + code);
            }
        }
    }
  
    return codes;
}

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;

    vector<string> codes = getCodes(str);

    cout << "[";
    for (int i = 0; i < codes.size(); i++) {
        cout << codes[i];
        if (i != codes.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
