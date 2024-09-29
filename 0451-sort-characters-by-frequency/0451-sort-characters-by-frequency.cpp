class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freqMap;
        for(char c : s)
         freqMap[c]++;

        vector<pair<int,char>> freqVec;
        for(auto &entry : freqMap)
         freqVec.push_back({entry.second,entry.first});
         
        sort(freqVec.begin(),freqVec.end(),greater<pair<int,char>>());

        string result;
        for(auto &entry : freqVec)
         result += string(entry.first,entry.second);
        
        return result;
    }
};