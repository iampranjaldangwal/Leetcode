class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_map<int,int> mp;
        int count = 0;
        int n = nums.size();
        for(int i=0;i<n;i++)
           mp.emplace(nums[i],i);

        for(int i=0;i<n;i++){
            if(mp.find(nums[i]+diff)!=mp.end()&&mp.find(nums[i]+diff*2)!=mp.end())
              count++;
        }
        return count;
    }
};