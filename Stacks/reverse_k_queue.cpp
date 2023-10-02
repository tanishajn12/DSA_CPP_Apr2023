#include<iostream>
#include<queue>
#include<stack>

using namespace std;

void reverseK(queue<int>& q, int k) {
    stack<int> s;
    for(int i=0; i<k; i++){
        s.push(q.front());
        q.pop();
    }

    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }

    for(int i=0; i<q.size()-k; i++) {
        q.push(q.front());
        q.pop();
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            q.push(x);
        }

        reverseK(q, k);

        while (!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }
        cout << endl;
    }
    return 0;
}


