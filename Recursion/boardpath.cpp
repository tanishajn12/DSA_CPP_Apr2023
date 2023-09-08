#include <iostream>
using namespace std;

int countPaths(int N, int M) {
    if (N == 0) {
        return 1;
    } else if (N < 0) {
        return 0;
    }

    int count = 0;
    for (int i = 1; i <= M; i++) {
        count += countPaths(N - i, M);
    }
    return count;
}

void printPaths(int N, int M, string path = "") {
    if (N == 0) {
        cout << path << " ";
        return;
    } else if (N < 0) {
        return;
    }

    for (int i = 1; i <= M; i++) {
        printPaths(N - i, M, path + to_string(i));
    }
}

int main() {
    int N, M;
    cout << "Enter the size of the board: ";
    cin >> N;
    cout << "Enter the number of faces of the dice: ";
    cin >> M;

    cout << "Number of paths: " << countPaths(N, M) << endl;
    cout << "Paths: ";
    printPaths(N, M);
    
    return 0;
}


