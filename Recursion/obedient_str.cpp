#include <iostream>
#include <string>

using namespace std;

bool check_string(string s, int i) {
    if (i == s.length()) { //base case
        return true;
    } 
    
    else if (s[i] == 'a') {
        if (i + 1 < s.length() && s[i+1] == 'a') {
            return check_string(s, i+1);
        } else if (i + 2 < s.length() && s[i+1] == 'b' && s[i+2] == 'b') {
            return check_string(s, i+3);
        } else {
            return false;
        }
    } 
    
    else if (i + 1 < s.length() && s[i] == 'b' && s[i+1] == 'b') {
        if(i+2 < s.length() && s[i+2]=='a'){
            return check_string(s,i+3);
        }

        else{
            return check_string(s, i+2);
        }

    } 

    else{
        return false;
    }
}

int main() {
    string s;
    cin >> s;
    bool result = check_string(s, 0);
    cout << (result ? "true" : "false") << endl;
    return 0;
}