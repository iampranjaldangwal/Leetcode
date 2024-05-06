class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i = 0 ,j = 0;
        while( i < nums1.size() && j < nums2.size()){
          if(nums1[i] == nums2[j]){
            if(result.empty() || result.back() != nums2[j])
                result.push_back(nums2[j]);
                i++;
                j++;
          }    
            else if(nums1[i] < nums2[j])
              i++;
            else
             j++;
          }
    return result;
        }
};