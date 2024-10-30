class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l=0,r=0;
        int n = nums.size();
        int length = 0;
        int maxLength = 0;
        int zeroCount = 0;
        while(r<n){
            if(nums[r]==1){
                length = r-l+1;
                r++;
            }
            else{
                zeroCount++;
                while(zeroCount > k){
                    if(nums[l]==0){
                        zeroCount--;
                    }
                 l++;
                }
                length = r-l+1;
                r++;
            }
            maxLength = max(maxLength,length);
        }
        return maxLength;
    }
};