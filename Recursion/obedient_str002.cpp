#include <iostream>
using namespace std;

bool checkString(string s, int index) {
    // Base case: if the entire string is processed
    if (index == s.length()) {
        return true;
    }

    if (s[index] == 'a') {

        // Check if 'a' is followed by nothing or 'a' or "bb"
        if (index + 1 < s.length() && s[index + 1] == 'a') {
            return checkString(s, index + 1);
        } 
        
        else if(index + 2 < s.length() && s.substr(index + 1, 2) == "bb") {
            
            // Check if "bb" is followed by nothing or an 'a'
            if (index + 3 < s.length() && s[index + 3] == 'a') {
                return checkString(s, index + 3);
            } 
            
            else {
                return false;
            }
        } 
        
        else {
            return false;
        }
    } 
    
    else {
        return false;
    }
}

bool checkString(string s) {
    return checkString(s, 0);
}

int main() {
    string str;
    cout << "Enter the String: ";
    getline(cin, str);

    bool result = checkString(str);
    cout << (result ? "true" : "false") << endl;

    return 0;
}

