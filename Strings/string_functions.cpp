#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	// computing the size or length of a string
	string str = "coding blocks";
    cout <<"1. "<< str.length() << endl;
	cout << "2. "<< str.size() << endl;

	// appending / concatnating str2 to str1
	string str1 = "new";
	string str2 = "delhi";

	//1. using append()
    str1.append(str2);
	cout <<"3. "<< str1 << endl;

	//2. using '+' operator
    string str3;
    str3="best";
	str1 = str1 + str3;
	cout <<"4. "<< str1 << endl;

	// comparing two strings
	string str4 = "abcde";
	string str5 = "abc";

	// 1. using compare
	cout <<"5. "<< str4.compare(str5) << endl;

	// 2. using relational operators
	if(str4 > str5) {
        cout << "6. "<<str4 << " is greater" << endl;
	} 
    else {
        cout <<"6. "<< str5 << " is greater" << endl;
	}

	// searching for a substring in a string using find()

	string str6= "mississippi";

	cout <<"7. "<< str6.find("si") << endl;
	cout <<"8. "<< str6.rfind("si") << endl;
	cout <<"9. "<< str6.find("hello") << endl;
	cout <<"10. "<< string::npos << endl;

	string key = "hello";
	if(str6.find(key) != string::npos) {
        cout <<"11. "<< key << " is present " << endl;
	} 
    else {
        cout <<"11. "<< key << " is not present" << endl;
	}

	// extracting a substring from a string using substr()

	string str7 = "helloworld";
	string subString = str7.substr(4);
	cout <<"12. "<< subString << endl;

	subString = str7.substr(4, 2);
	cout <<"13. "<< subString << endl;

	// converting a string into char array
	string str8 = "new delhi";
	char* arr = (char*)str8.c_str();
	cout <<"14. "<< arr << endl;

	// converting a char array into a string
	char a[] = "hello world";
	string str9(a);
	cout <<"15. "<< str9 << endl;
	string st(10, 'a');
	cout <<"16. "<< st << endl;

	// reversing a string using reverse()
	string str10 = "coding blocks";
    reverse(str10.begin(), str10.end()); // (start, end)
	cout <<"17. "<< str10 << endl;

	return 0;
}

