class Solution {
public:
    
    bool valid(int i, int j, int val,vector<vector<char>> &board)
    {
        //column conflict
        for(int c=0;c<9;c++)
        {
            if(c!=j)
            {
                if(board[i][c] == val)
                    return false;
            }
        }
        
        //cout<<"No col confi"<<endl;
        
        //row conflict
        for(int r=0;r<9;r++)
        {
            if(r!=i)
            {
                if(board[r][j] == val)
                    return false;
            }
        }
        //cout<<"No row confi" <<endl;
        //3X3 submatrix conflict
        int nrow = 0;
        int ncol = 0;
        
        nrow = (i/3) * 3;
        ncol = (j/3) * 3;
        
        for(int r=nrow;r<nrow+3;r++)
        {
            for(int c=ncol;c<ncol+3;c++)
            {
                if(r!=i && c!=j)
                {
                    if(board[r][c] == val)
                    {
                        return false;
                    }
                }
            }
        }
        //cout<<"3x3 passed"<<endl;
        
        return true;
        
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j] != '.')
                {
                    if(!valid(i,j,board[i][j],board))
                        return false;
                }
            }
        }
        //cout<<board[0][2]<<endl;
        //cout<<valid(7,5,board[7][5],board)<<endl;
        return true;
    }
};
