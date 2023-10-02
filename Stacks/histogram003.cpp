#include <iostream>
#include <stack>
using namespace std;

long long largestRectangleArea(int heights[], int n) {
    stack<int> s;

    long long maxArea = 0;
    int i = 0;

    while (i < n) {
        if (s.empty() || heights[i] >= heights[s.top()]) {
            s.push(i);
            i++;
        } 
        
        else {
            int top = s.top();
            s.pop();
            long long area = heights[top] * (s.empty() ? i : (i - s.top() - 1));
            maxArea = max(maxArea, area);
        }
    }

    while (!s.empty()) {
        int top = s.top();
        s.pop();
        long long area = heights[top] * (s.empty() ? i : (i - s.top() - 1));
        maxArea = max(maxArea, area);
    }

    return maxArea;
}

int main() {
    int n;
    cin >> n;

    int heights[n];
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    long long maxArea = largestRectangleArea(heights, n);

    cout<< maxArea << endl;

    return 0;
}


