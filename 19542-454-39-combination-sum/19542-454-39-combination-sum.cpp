class Solution {
public:
    void findCombinations(int index,int target,vector<int> &ds,vector<vector<int>> &ans,vector<int> &candidates){
        if(index == candidates.size()){
            if(target == 0){
                ans.push_back(ds);
            }
            return;
        }

        if(candidates[index] <= target){
          ds.push_back(candidates[index]);
          findCombinations(index,target-candidates[index],ds,ans,candidates);
          ds.pop_back();
        }
        findCombinations(index+1,target,ds,ans,candidates);
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findCombinations(0,target,ds,ans,candidates);
        return ans;
    }
};