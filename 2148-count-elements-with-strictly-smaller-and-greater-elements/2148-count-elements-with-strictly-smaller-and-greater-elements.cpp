class Solution {
public:
    int countElements(vector<int>& nums) {
        int n = nums.size();
        int count=0;
        int flagHigh,flagLow;
        for(int i=0;i<n;i++){
            flagHigh = 0;
            flagLow  = 0;
            for(int j=0;j<n;j++){
                if(nums[i]>nums[j])
                flagHigh = 1;
                else if(nums[i]<nums[j])
                flagLow = 1;
            }
            if(flagHigh==1 && flagLow==1)
            count++;
        }
        return count;
    }
};