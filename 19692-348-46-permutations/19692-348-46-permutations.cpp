class Solution {
public:
   void recurpermute(int index,int n,vector<int> &nums,vector<vector<int>> &ans){
       if(index == n){
        ans.push_back(nums);
        return;
       }
       for(int i=index;i<n;i++){
          swap(nums[index],nums[i]);
          recurpermute(index+1,n,nums,ans);
          swap(nums[index],nums[i]);
       }
       
   }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        recurpermute(0,n,nums,ans);
        return ans;
    }
};