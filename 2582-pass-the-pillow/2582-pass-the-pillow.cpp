class Solution {
public:
    int passThePillow(int n, int time) {
        int pos = 1,t = 0,direction = 1;
        while(t < time){
           pos += direction;
            if(pos == n)
            direction = -1;
            else if(pos == 1)
            direction = 1;
            t++;
        }
        return pos;
    }
};