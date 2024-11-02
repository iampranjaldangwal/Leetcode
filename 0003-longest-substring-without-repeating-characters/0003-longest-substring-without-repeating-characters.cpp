class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_map<char,int> mp;
       int left=0,right=0,maxLength=0;
       int n = s.size();
       while(right<n){
        if(mp.find(s[right])!=mp.end()){
            left = max(left,mp[s[right]]+1);
        }
        mp[s[right]] = right;
        maxLength = max(maxLength,right-left+1);
        right++;
       }
       return maxLength;
    }
};