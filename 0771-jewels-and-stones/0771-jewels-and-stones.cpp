class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int> mp;
        int n = jewels.size();
        int m = stones.size();
        int count = 0;
        for(int i=0;i<m;i++)
           mp[stones[i]]++;
        for(int i=0;i<n;i++)
           count += mp[jewels[i]];
        return count;
    }
};