class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=n-1;j>=0;j--){
                if(nums[j] == -nums[i])
                return nums[j];
            }
        }
        return -1;
    }
};