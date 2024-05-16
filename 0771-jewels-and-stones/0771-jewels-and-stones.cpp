class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char, int> mp;
        
        for (char jewel : jewels) {
            mp[jewel] = 0; 
        }
        
        int count = 0;
        for (char stone : stones) {
            if (mp.find(stone) != mp.end())
             count++; 
        }    
        return count;
    }
};
