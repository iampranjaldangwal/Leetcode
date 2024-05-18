class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
       unordered_map<int,int> map1;
       unordered_map<int,int> map2;
       int n = nums1.size();
       int m = nums2.size();
       for(int i=0;i<n;i++)
        map1[nums1[i]]=i;

        for(int i=0;i<m;i++)
        map2[nums2[i]]=i;
       
       vector<int> answer;
       int count1=0,count2=0;
       for(int i=0;i<n;i++){
          if(map2.find(nums1[i])!=map2.end())
          count1++;
       }
       answer.push_back(count1);
        for(int i=0;i<m;i++){
          if(map1.find(nums2[i])!=map1.end())
          count2++;
       }
       answer.push_back(count2);
       return answer;
    }
};