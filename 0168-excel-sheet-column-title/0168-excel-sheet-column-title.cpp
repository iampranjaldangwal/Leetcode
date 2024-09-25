class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s ;
        while(columnNumber != 0){
        int r = columnNumber % 26 ;
        if(r == 0){
        s.push_back('Z');
        columnNumber -= 1;
        }
        else
        s.push_back('A'+(r-1));
        columnNumber /= 26 ;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};