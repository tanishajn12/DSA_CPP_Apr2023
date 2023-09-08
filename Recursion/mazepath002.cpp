#include <iostream>
#include <string>
using namespace std;

void findPaths(int row, int col, int n1, int n2, string path) {
    // Base case: If the player reaches the bottom-right corner, print the path
    if (row == n1 - 1 && col == n2 - 1) {
        cout << path << " ";
        return;
    }

    // Recursive cases
    // If the player can move vertically (down), make a recursive call with updated path and row
    if (row < n1 - 1) {
        findPaths(row + 1, col, n1, n2, path + "V");
    }

	// If the player can move horizontally (right), make a recursive call with updated path and column
    if (col < n2 - 1) {
        findPaths(row, col + 1, n1, n2, path + "H");
    }


    // If the player can move diagonally (south-east), make a recursive call with updated path and both row and column
    if (row < n1 - 1 && col < n2 - 1) {
        findPaths(row + 1, col + 1, n1, n2, path + "D");
    }
}

int countPaths(int row, int col, int n1, int n2) {
    // Base case: If the player reaches the bottom-right corner, return 1 (counting this path)
    if (row == n1 - 1 && col == n2 - 1) {
        return 1;
    }

    // Recursive cases
    int paths = 0;
    // If the player can move horizontally (right), add the number of paths from the next column
    if (col < n2 - 1) {
        paths += countPaths(row, col + 1, n1, n2);
    }

    // If the player can move vertically (down), add the number of paths from the next row
    if (row < n1 - 1) {
        paths += countPaths(row + 1, col, n1, n2);
    }

    // If the player can move diagonally (south-east), add the number of paths from the next row and column
    if (row < n1 - 1 && col < n2 - 1) {
        paths += countPaths(row + 1, col + 1, n1, n2);
    }
    return paths;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;

	findPaths(0, 0, n1, n2, "");
	cout<<endl;

    int totalPaths = countPaths(0, 0, n1, n2);
    cout << totalPaths << endl;
    return 0;
}


