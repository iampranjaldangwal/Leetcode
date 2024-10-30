class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l=0,r=0;
        int n = nums.size();
        int length = 0;
        int maxLength = 0;
        while(r<n){
            if(nums[r]==1){
                length = r-l+1;
                r++;
            }
            else{
                l = r+1;
                r++;
            }
            maxLength = max(maxLength,length);
        }
        return maxLength;
    }
};