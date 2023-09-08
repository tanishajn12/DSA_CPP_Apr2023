#include <bits/stdc++.h>
using namespace std;

void firstBinary(vector<long long>& v, long long& n, long long target, long long s, long long e, long long &firstOcc) {
    if (s > e) {
        return;
    }

    long long mid = (s + e) / 2;
    if (v[mid] >= target) {
        if (v[mid] == target) {
            firstOcc = mid;
        }
        firstBinary(v, n, target, s, mid - 1, firstOcc);
    }

    else {
        firstBinary(v, n, target, mid + 1, e, firstOcc);
    }

    return;
}

void lastBinary(vector<long long>& v, long long& n, long long target, long long s, long long e, long long &lastOcc) {
    if (s > e) {
        return;
    }

    long long mid = (s + e) / 2;

    if (v[mid] <= target) {
        if (v[mid] == target) {
            lastOcc = mid;
        }
        lastBinary(v, n, target, mid + 1, e, lastOcc);
    }

    else {
        lastBinary(v, n, target, s, mid - 1, lastOcc);
    }

    return;
}
 
int main(){
    long long n;
    cin>>n;

    vector<long long> v;

    for (long long i = 0; i < n; ++i){
        long long digit;
        cin>>digit;
        v.push_back(digit);
    }

    long long target;
    cin>>target;

    long long firstOcc = -1;
    long long lastOcc = -1;

    firstBinary(v, n, target, 0, n, firstOcc);
    lastBinary(v, n, target, 0, n, lastOcc);

    if (lastOcc == -1 and firstOcc == -1) {
        cout<<-1;
        return 0;
    }

    cout<<lastOcc - firstOcc + 1<<endl;
}

