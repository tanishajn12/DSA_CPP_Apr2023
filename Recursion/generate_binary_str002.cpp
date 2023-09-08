#include <iostream>
#include <string>
using namespace std;

void generate_all_strings(string s, int pos) {
    if (pos == s.length()) {
        cout << s << " ";
        return;
    }
    
    if (s[pos] == '?') {
        s[pos] = '0';
        generate_all_strings(s, pos + 1);
        s[pos] = '1';
        generate_all_strings(s, pos + 1);
    
    } 
    
    else {
        generate_all_strings(s, pos + 1);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        generate_all_strings(s, 0);
        cout << endl;
    }
    return 0;
}

