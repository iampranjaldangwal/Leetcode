class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n = nums.size();
        int minVal = INT_MAX;
        int secMin = INT_MAX;
        for(int i=1;i<n;i++){
            if(nums[i] <= minVal){
            secMin = minVal;
            minVal = nums[i];
            }
            else if(nums[i] < secMin)
            secMin = nums[i];
        }
        return nums[0] + minVal + secMin; 
    }
};