class Solution {
public:
    
    bool isSafe(int row, int col,vector<string> board, int n){
        
        int row1= row;
        int col1= col;
        while(row >=0 && col >=0){
            if(board[row--][col--] =='Q')
                return false;
        }
        
        row= row1;
        col= col1;
        while(col>=0){
            if(board[row][col--]=='Q')
                return false;
            //col--;
        }
        
        row= row1;
        col= col1;
        while(row<n && col>=0){
            if(board[row++][col--]=='Q')
                return false;
            //row++;
            //col--;
        }
        return true;
    }
    
    
    void solve(int col,vector<string> board, vector<vector<string>>& ans, int n, vector<int>& leftRow, vector<int>& upperDiag, vector<int>& lowerDiag  ){
        if(col== n){
            ans.push_back(board);
            return;
        }
        
        for(int row=0; row<n; row++){
            if(leftRow[row] == 0 && upperDiag[row+col] == 0 && lowerDiag[(n-1) + (col-row)] == 0){
                board[row][col]= 'Q';
                leftRow[row]=1;
                upperDiag[row+col]=1;
                lowerDiag[(n-1) + (col-row)]=1;
                solve(col+1, board, ans, n, leftRow, upperDiag, lowerDiag);
                board[row][col]= '.';
                leftRow[row]=0;
                upperDiag[row+col]=0;
                lowerDiag[(n-1) + (col-row)]=0;
            }
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        
        string s(n , '.');
        for(int i=0; i<n; i++){
            board[i]=s;
        }
        
        vector<int> leftRow(n);
        vector<int> upperDiag(2*n -1), lowerDiag(2*n -1);
        
        solve(0, board, ans, n, leftRow, upperDiag, lowerDiag);
        return ans;
    }
};