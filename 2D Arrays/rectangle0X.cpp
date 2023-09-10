#include <iostream>
using namespace std; 
  

void fill0X(int m, int n) 
{ 
    int i, sr = 0, sc = 0; 

  
    int row = m;
    int col = n; 
  
     
    char mat[m][n]; 
    char x = 'X'; 
  
    while (sr < m && sc < n) 
    { 
        /* Fill the first row */
        for (i = sc; i < n; ++i) {
            mat[sr][i] = x; 
        }
        sr++; 
  
        /* Fill the last column  */
        for (i = sr; i < m; ++i) {
            mat[i][n-1] = x; 
        }
        n--; 
  
        /* Fill the last row  */
        if (sr < m) 
        { 
            for (i = n-1; i >= sc; --i) {
                mat[m-1][i] = x; 
            }
            m--; 
        } 
  
        /* Fill the first column  */
        if (sc< n) 
        { 
            for (i = m-1; i >= sr; --i) {
                mat[i][sc] = x; 
            }
            sc++; 
        } 
  
        // Flip character for next iteration 
        if (x == '0') {
            x = 'X';
        } 
        
        else {
            x = '0';
        }
 
    } 
  
    // Print the filled matrix 
    for (i = 0; i < row; i++) { 
        for (int j = 0; j < col; j++) {
            cout<< mat[i][j]<<' '; 
        }
        cout<<"\n";; 
    } 
} 
  
int main() {
    int m,n;
    cin>>m;
    cin>>n;

    fill0X(m,n);
    return 0;
}