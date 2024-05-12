class Solution {
public:
    int majorityElement(vector<int>& nums) {
     int n = nums.size();
     int majority = n/2 ;
     for(int i=0;i<n;i++){
        if(count(nums.begin(),nums.end(),nums[i]) > majority)
        return nums[i];
     }
     return 0;
    }
};