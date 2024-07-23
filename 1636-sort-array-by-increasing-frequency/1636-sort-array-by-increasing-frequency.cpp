class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();
        vector<int> output;
        for(int num :nums)
            mp[num]++;
        
        sort(nums.begin(),nums.end(),[&](int a,int b){
            if(mp[a]==mp[b])
                return a>b;
            return mp[a]<mp[b];
        });
       return nums;
    }
};