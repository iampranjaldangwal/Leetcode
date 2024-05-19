class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> answer;
        int m = l.size();
        for(int i=0;i<m;i++){
         vector<int> subArray(nums.begin()+l[i],nums.begin()+r[i]+1);
         sort(subArray.begin(),subArray.end());
           bool flag = true;
           for(int j=0;j<subArray.size()-1;j++){
              if(subArray[j+1]-subArray[j] != subArray[1]-subArray[0])
              flag = false;
           }
           answer.push_back(flag);
        }
        return answer;
    }
};