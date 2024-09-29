class Solution {
public:
    int maxDepth(string s) {
        int currDepth = 0;
        int maxDepth = 0;
        for(char c : s){
            if(c=='(') currDepth++;
            else if(c==')') currDepth--;
            if(currDepth > maxDepth) maxDepth = currDepth;
        }
        return maxDepth;
    }
};