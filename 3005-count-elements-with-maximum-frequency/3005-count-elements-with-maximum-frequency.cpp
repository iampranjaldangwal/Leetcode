class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
         mp[nums[i]]++;

        int maxFreq = 0;
        for(int i=0;i<n;i++)
         maxFreq = max(maxFreq,mp[nums[i]]);

        int count = 0;
        for(int i=0;i<n;i++){
           if(mp[nums[i]] == maxFreq)
           count++;
        }
        return count;
    }
};