class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int n = nums.size();
        int maxXor = 0;
        for(int i=0;i<n;i++){
            int x = nums[i];
            for(int j=0;j<n;j++){
                int y = nums[j];
                if(abs(x-y) <= min(x,y))
                maxXor = max(maxXor,(x^y));
            }
        }
        return maxXor;
    }
};