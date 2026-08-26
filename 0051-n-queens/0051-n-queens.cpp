class Solution {
public:
    int N;
    vector<vector<string>>ans;
    bool isValid(vector<string>& boards,int row,int col){
        for(int i=row-1;i>=0;i--){
            if(boards[i][col]=='Q') return false;
        }
        for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
            if(boards[i][j]=='Q') return false;
        }
        for(int i=row-1,j=col+1;i>=0 && j<N;i--,j++){
            if(boards[i][j]=='Q') return false;
        }
        return true;
    }
    void solve(vector<string>& boards,int row){
        if(row>=N){
            ans.push_back(boards);
            return;
        }
        for(int col=0;col<N;col++){
            if(isValid(boards,row,col)){
                boards[row][col]='Q';
                solve(boards,row+1);
                boards[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        N=n;
        vector<string>boards(n,string(n,'.'));
        solve(boards,0);
        return ans;
    }
};