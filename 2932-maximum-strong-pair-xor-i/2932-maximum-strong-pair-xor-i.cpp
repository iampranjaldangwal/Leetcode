class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int maxXor = 0;
        unordered_set<int> s(nums.begin(),nums.end());
        for(auto& x:s){
            for(auto& y:s){
                if(abs(x-y) <= min(x,y))
                maxXor = max(maxXor,(x^y));
            }
        }
        return maxXor;
    }
};