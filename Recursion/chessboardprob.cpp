#include <iostream>
#include <vector>
#include <string>
using namespace std;

void findPaths(int n, int row, int col, vector<string>& paths, string path) {
    if (row < 0 || col < 0 || row >= n || col >= n) {
        // Invalid position, return
        return;
    }

    if (row == n - 1 && col == n - 1) {
        // Reached the destination, add the path to the vector
        paths.push_back(path);
        return;
    }

    // Knight moves
    findPaths(n, row + 2, col + 1, paths, path + "K{" + to_string(row + 2) + "-" + to_string(col + 1) + "}");
    findPaths(n, row + 1, col + 2, paths, path + "K{" + to_string(row + 1) + "-" + to_string(col + 2) + "}");

    // Rook moves on walls
    if (row == 0 || row == n - 1 || col == 0 || col == n - 1) {
        // Horizontal moves
        for (int i = col + 1; i < n; i++) {
            findPaths(n, row, i, paths, path + "R{" + to_string(row) + "-" + to_string(i) + "}");
        }

        // Vertical moves
        for (int i = row + 1; i < n; i++) {
            findPaths(n, i, col, paths, path + "R{" + to_string(i) + "-" + to_string(col) + "}");
        }
    }

    // Bishop moves on diagonals
    if (row == col || row + col == n - 1) {
        // Diagonal moves (positive slope)
        for (int i = row + 1, j = col + 1; i < n && j < n; i++, j++) {
            findPaths(n, i, j, paths, path + "B{" + to_string(i) + "-" + to_string(j) + "}");
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<string> paths;
    findPaths(n, 0, 0, paths, "{0-0}");

    cout << "Valid paths: ";
    for (const auto& path : paths) {
        cout << path << " ";
    }
    cout << endl;

    cout << "Total count: " << paths.size() << endl;

    return 0;
}
