class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int maxDifference = 0;
        maxDifference = (nums[n-2]*nums[n-1])-(nums[0]*nums[1]);
    return maxDifference;
    }
};