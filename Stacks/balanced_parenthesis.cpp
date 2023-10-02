#include<iostream>
#include<stack>
using namespace std;

bool isBalanced(string str) {
    stack<char> s;

    for (char ch:str) {
        switch(ch) {
            case '(': s.push(ch); break;
            case '[': s.push(ch); break;
            case '{': s.push(ch); break;

            case ')': if(!s.empty() && s.top() == '(') s.pop(); else return false;break;
                // if(!s.empty() && s.top() == '('{
                //       s.pop();
                //  } else{
                //      return false;
                //  }

            case ']': if(!s.empty() && s.top() == '[') s.pop(); else return false;break;
            case '}': if(!s.empty() && s.top() == '{') s.pop(); else return false;break;
        }
    }
    return s.empty(); //if stack is empty true otherwise false;
}

int main() {
    string str;
    cin>>str;

    isBalanced(str) ? cout<<"balanced"<<endl:
    cout<<"not balanced!" <<endl;

    return 0;
}

