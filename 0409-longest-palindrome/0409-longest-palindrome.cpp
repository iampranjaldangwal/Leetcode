class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.size();
        unordered_map<char,int> mp;
        for(char c : s)
        mp[c]++;
        int length = 0;
        bool isOdd = false;
        for(auto& c:mp){
            if(c.second %2 == 0)
            length += c.second;
            else{
            length += c.second-1;
            isOdd = true;
            }
        }
        if(isOdd)
        length += 1;
        return length;
    }
};