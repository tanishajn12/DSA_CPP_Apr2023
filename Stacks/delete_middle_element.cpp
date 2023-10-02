#include <iostream>
#include <stack>
using namespace std;

void deleteMiddleElement(stack<int>& s) {
    int size = s.size();
    int midPos = (size / 2) + 1;
    stack<int> tempStack;

    for (int i = 1; i < midPos; i++) {
        tempStack.push(s.top());
        s.pop();
    }

    s.pop();

    while (!tempStack.empty()) {
        s.push(tempStack.top());
        tempStack.pop();
    }
}

void printStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of the stack: ";
    cin >> n;

    stack<int> s;

    cout << "Enter the elements of the stack: ";
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        s.push(element);
    }

    deleteMiddleElement(s);

    cout << "Modified stack after deleting middle element: ";
    printStack(s);

    return 0;
}
