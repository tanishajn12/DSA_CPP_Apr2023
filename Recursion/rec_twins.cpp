#include <iostream>
#include <string>

using namespace std;

int count_twins(string s) {
    if (s.length() < 3) {
        return 0;
    } else if (s[0] == s[2]) {
        return 1 + count_twins(s.substr(1));
    } else {
        return count_twins(s.substr(1));
    }
}

int main() {
    string s;
    cin >> s;
    cout << count_twins(s) << endl;
    return 0;
}


