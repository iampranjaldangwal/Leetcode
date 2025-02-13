class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int row,col;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(board[i][j] == 'R'){
                    row = i;
                    col = j;
                } 
            }
        }
      
      int capture = 0;

      // Upward Direction
      int i = row, j = col;
      while(i>=0 && board[i][j] != 'B'){
           if(board[i][j] == 'p'){
            capture++;
            break;
           }
           i--;
      }
      
      // Downward Direction
      i = row, j = col;
      while(i<8 && board[i][j] != 'B'){
           if(board[i][j] == 'p'){
            capture++;
            break;
           }
           i++;
      }
    
      // Right Direction
      i = row, j = col;
      while(j<8 && board[i][j] != 'B'){
           if(board[i][j] == 'p'){
            capture++;
            break;
           }
           j++;
      }

      // Left Direction
      i = row, j = col;
      while(j>=0 && board[i][j] != 'B'){
           if(board[i][j] == 'p'){
            capture++;
            break;
           }
           j--;
      }
      return capture;
    }
};