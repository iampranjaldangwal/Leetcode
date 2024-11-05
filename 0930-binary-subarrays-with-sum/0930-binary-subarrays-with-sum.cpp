class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        int n = nums.size();
        unordered_map<int,int> mp;
        mp[0] = 1;
        int prefixSum=0,count=0;
        
        for(int i=0;i<n;i++){
            prefixSum += nums[i];
            int remove = prefixSum-goal;
            count += mp[remove];
            mp[prefixSum]++;
        }
        return count;
    }
};