class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int majorEle = 0;
        int count = 0;
        for(int i=0;i<n;i++){
            if(count == 0)
            majorEle = nums[i];
            if(nums[i]==majorEle)
            count++;
            else
            count--;       
        }
        int resCount=0;
        for(int i=0;i<n;i++){
            if(nums[i]==majorEle)
            resCount++;
        }
        if(resCount>n/2)
        return majorEle;
    return 0;    
    }
};