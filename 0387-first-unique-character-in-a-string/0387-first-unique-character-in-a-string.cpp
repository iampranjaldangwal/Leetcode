#include<queue>
class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        queue<int> q;
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++){
            q.push(i);
            freq[s[i]]++;
            while(!q.empty() && freq[s[q.front()]] > 1)
            q.pop();
        }
        if(q.empty())
        return -1;
        else
        return q.front();
    }
};