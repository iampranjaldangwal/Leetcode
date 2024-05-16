class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> count;
        int n = nums.size();
        int result = 0;
        for(int i=0;i<n;i++)
           result += count[nums[i]]++;
        return result;
    }
};