class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();
        for(int i=0;i<n;i++)
        mp[nums[i]]++;

        int count = 0;
        int leftOverInteger = 0;
        for(auto& pair:mp){
            count += pair.second/2;
            leftOverInteger += pair.second%2;
        }
        return {count,leftOverInteger} ;
    }
};