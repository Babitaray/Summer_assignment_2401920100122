class Solution {
public:
int n,m;
vector<vector<int>> direction={{0,1},{0,-1},{1,0},{-1,0}};
bool findword(vector<vector<char>>&board,int i,int j,int idx, string& word){
     if(board.size()==0) return false;
     if(i<0 || j<0 || i>=n || j>=m || board[i][j]=='$') return false;
     if(board[i][j]!=word[idx]) return false;
     if(idx==word.size()-1) return true;
     
     int temp=board[i][j];
     board[i][j]='$';

     for(auto &dir:direction){
        int new_i=i+dir[0];
        int new_j=j+dir[1];
     if(findword(board,new_i,new_j,idx+1,word)) return true;
}
    board[i][j]= temp;
    return false;
     }
     

    bool exist(vector<vector<char>>& board, string word) {
        n=board.size();
        m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0] && findword(board,i,j,0,word))
                return true;
            }
        }
        return false;
    }
};