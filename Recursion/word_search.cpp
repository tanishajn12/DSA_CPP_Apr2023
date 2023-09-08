
board[i][j]=="#";
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0}
for (int l=0; )

bool exist(vector<vector><char>>& board, string word) {
    int m=board.size();
    int n=board[0].size();
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(board[i][j]==word[0]) {
                if(searchWord(board, word, m,n, i, j, k))
            }
        }
    }
}