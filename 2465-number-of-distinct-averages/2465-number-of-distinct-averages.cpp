class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_set<float> s;
        int n = nums.size();
        int i=0,j=n-1;
        while(i<j){
            s.insert((nums[i]+nums[j])/2.0);
            i++;
            j--;
        }
        return s.size();
    }
};