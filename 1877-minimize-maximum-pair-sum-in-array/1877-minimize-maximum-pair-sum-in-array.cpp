class Solution {
public:
    int minPairSum(vector<int>& nums) {
        vector<int> vec;
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        while(i<j){
            vec.push_back(nums[i]+nums[j]);
            i++;
            j--;
        }
        return *std::max_element(vec.begin(),vec.end());
    }
};