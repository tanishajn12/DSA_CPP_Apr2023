#include <iostream>
#include <vector>
using namespace std;

void printCodes(string str, string code, vector<string>& result) {
    //Base case: if the entire string is processed, 
    //add the code to the result
    if (str.empty()) {
        result.push_back(code);
        return;
    }

    // Process the first single-digit character
    int digit1 = str[0] - '0';
    if (digit1 >= 1 && digit1 <= 9) {
        char ch = 'a' + digit1 - 1;
        printCodes(str.substr(1), code + ch, result);
    }

    // Process the first two-digit character
    if (str.length() >= 2) {
        int digit2 = stoi(str.substr(0, 2));
        if (digit2 >= 10 && digit2 <= 26) {
            char ch = 'a' + digit2 - 1;
            printCodes(str.substr(2), code + ch, result);
        }
    }
}

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;

    vector<string> result;
    printCodes(str, "", result);

    cout << "[";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}


