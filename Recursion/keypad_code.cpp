#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<char, string> keypad_dict = {
    {'1', "abc"},
    {'2', "def"},
    {'3', "ghi"},
    {'4', "jkl"},
    {'5', "mno"},
    {'6', "pqrs"},
    {'7', "tuv"},
    {'8', "wx"},
    {'9', "yz"}
};

int count_words(string str) {
    if (str.empty()) {
        return 0;
    }

    if (str.length() == 1) {
        return keypad_dict[str[0]].length();
    }

    int count = 0;
    for (char c : keypad_dict[str[0]]) {
        count += count_words(str.substr(1));
    }
    return count;
}

void print_words(string str, string word = "") {
    if (str.empty()) {
        cout << word << " ";
        return;
    }

    for (char c : keypad_dict[str[0]]) {
        print_words(str.substr(1), word + c);
    }
}

int main() {
    string str;
    cin >> str;

    cout << "Possible words: ";
    print_words(str);
    cout << endl;

    int count = count_words(str);
    cout << "Total count: " <<count << endl;

    return 0;
}

