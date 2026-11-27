class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<pair<int,int>> rows;
        set<pair<int,int>> cols;
        set<pair<int,pair<int,int>>> grid;

        for(int i = 0 ; i < 9; i++)
        {
            for(int j=0 ; j< 9;j++)
            {
                if(board[i][j] == '.') continue;
                if(rows.count({board[i][j],i})) return false;
                if(cols.count({board[i][j],j})) return false;
                if(grid.count({board[i][j],{i/3,j/3}})) return false;
                rows.insert({board[i][j],i});
                cols.insert({board[i][j],j});
                grid.insert({board[i][j],{i/3,j/3}});

            }
        }
        return true;


        
    }
};
