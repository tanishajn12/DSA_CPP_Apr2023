#include <iostream>
#include <string>
using namespace std;

void findPaths(int row, int col, int n, string path) {
    // Base case: If the player reaches the bottom-right corner, print the path
    if (row == n - 1 && col == n - 1) {
        cout << path << " ";
        return;
    }

    // Recursive cases

    // If the player can move vertically (down), make a recursive call with updated path and row
    if (row < n - 1) {
        findPaths(row + 1, col, n, path + "V");
    }
	// If the player can move horizontally (right), make a recursive call with updated path and column

	if (col < n - 1) {
        findPaths(row, col + 1, n, path + "H");
    }


    // If the player is on one of the diagonals and can move diagonally (south-east), make a recursive call with updated path and both row and column
    if (row == col || row + col == n - 1) {
        findPaths(row + 1, col + 1, n, path + "D");
    }
}

int countPaths(int row, int col, int n) {
    // Base case: If the player reaches the bottom-right corner, return 1 (counting this path)
    if (row == n - 1 && col == n - 1) {
        return 1;
    }

    // Recursive cases
    int paths = 0;
    // If the player can move horizontally (right), add the number of paths from the next column
    if (col < n - 1) {
        paths += countPaths(row, col + 1, n);
    }

    // If the player can move vertically (down), add the number of paths from the next row
    if (row < n - 1) {
        paths += countPaths(row + 1, col, n);
    }

    // If the player is on one of the diagonals and can move diagonally (south-east), add the number of paths from the next row and column
    if (row == col || row + col == n - 1) {
        paths += countPaths(row + 1, col + 1, n);
    }
    return paths;
}

int main() {
    int n;
    cin >> n;

	findPaths(0, 0, n, "");
	cout<<endl;

    int totalPaths = countPaths(0, 0, n);
    cout << totalPaths ;
    return 0;
}

