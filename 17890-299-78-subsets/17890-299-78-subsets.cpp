class Solution {
  public: 
    void subset(int index,int n,vector<int> &ds,vector<vector<int>> &ans,vector<int> &nums){
       if(index == n){
         ans.push_back(ds);
         return ;
       }

       ds.push_back(nums[index]);
       subset(index+1,n,ds,ans,nums);
       ds.pop_back();

       subset(index+1,n,ds,ans,nums);
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<int> ds;
        vector<vector<int>> ans;
        subset(0,n,ds,ans,nums);
        return ans;
    }
};