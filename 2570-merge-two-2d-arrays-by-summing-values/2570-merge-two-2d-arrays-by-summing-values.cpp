class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>> result;
        map<int,int> mp;
        int n = nums1.size();
        int m = nums2.size();
        for(int i=0;i<n;i++)
        mp[nums1[i][0]] += nums1[i][1];
        for(int i=0;i<m;i++)
        mp[nums2[i][0]] += nums2[i][1];
        
        for(auto& m : mp)
        result.push_back({m.first,m.second});
    return result;
    }
};