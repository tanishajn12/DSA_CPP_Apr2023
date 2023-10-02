#include<iostream>
#include<stack>
using namespace std;

class Queue {
    stack<int> enqueueStack;
    stack<int> dequeueStack;

    public:
        void enqueue(int value) {
            enqueueStack.push(value);
        }

        int dequeue() {
            if(dequeueStack.empty()) {
                transferElements();
            }

            int value=dequeueStack.top();
            dequeueStack.pop();
            return value;
        }

        bool empty() {
            return enqueueStack.empty() && dequeueStack.empty();
        }

        void transferElements() {
            while(!enqueueStack.empty()) {
                int value=enqueueStack.top();
                enqueueStack.pop();
                dequeueStack.push(value);
            }
        }
};

int main() {
    int n;
    cin >> n;
    Queue queue;

    for (int i = 0; i < n; i++) {
        queue.enqueue(i);
    }

    while (!queue.empty()) {
        cout << queue.dequeue() << " ";
    }

    cout << endl;
    return 0;
}


