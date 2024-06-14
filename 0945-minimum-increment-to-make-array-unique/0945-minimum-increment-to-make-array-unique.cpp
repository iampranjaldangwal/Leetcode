class Solution {
public:
    int minIncrementForUnique(vector<int>& nums){
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i=0,moves=0;
        for(int i=1;i<n;i++){
            if(nums[i]<=nums[i-1]){
              int inc = (nums[i-1] - nums[i]) + 1;
              nums[i] += inc;
              moves += inc;
            }
        }
        return moves;
    }
};