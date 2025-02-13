class Solution {
public:
    bool judgeCircle(string moves) {
        int n = moves.size();
        int h = 0, v = 0;
        for(int i=0;i<n;i++){
            if(moves[i] == 'R'){
                h++;
            }
            else if (moves[i] == 'L'){
                h--;
            }
            else if (moves[i] == 'U'){
                v++;
            } else {
                v--;
            }
        }
        if(h == 0 && v == 0){
            return true;
        } else {
            return false;
        }
    }
};