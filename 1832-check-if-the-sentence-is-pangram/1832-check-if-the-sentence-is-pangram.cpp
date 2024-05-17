class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int> mp;
        for(char c:sentence)
         mp[c]++; 
        
        for(char letter = 'a' ; letter <= 'z';letter++){
        if(mp.find(letter)==mp.end())
        return false;
        }
     return true;
    }
};