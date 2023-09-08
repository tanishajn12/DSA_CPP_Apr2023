#include <iostream>
#include <string>
using namespace std;

string insertStars(string& str, int index = 0) {

    // Base case: If the index reaches the end of the string, return the string itself
    if (index >= str.length() - 1) {
        return str;
    }

    // Recursive case
    // Check if the current character is the same as the next character
    if (str[index] == str[index + 1]) {

        // Insert a '*' between the two consecutive characters
        string newStr = str.substr(0, index + 1) + '*' + str.substr(index + 1);

        // Recursively call insertStars on the modified string with the next index
        return insertStars(newStr, index + 2);
    } 
    
    else {
        // If the characters are not the same, move to the next index
        return insertStars(str, index + 1);
    }
}

int main() {
    string str;
    cin >> str;

    string result = insertStars(str);
    cout << result << endl;

    return 0;
}
