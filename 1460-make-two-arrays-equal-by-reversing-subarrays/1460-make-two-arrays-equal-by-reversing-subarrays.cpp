class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(),target.end());
        sort(arr.begin(),arr.end());
        int i = 0,j = 0,count = 0 ;
        if(target.size()==arr.size()){
            for(int i=0;i<arr.size();i++){
                if(arr[i]==target[i])
                count++;
            }
            if(count==target.size())
            return true;
            else
            return false;
        }
        else
        return false;
    }
};