class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> count;
        int n = arr.size();
        for(int i=0;i<n;i++)
            count[arr[i]]++;

        unordered_set<int> uniqueCount;
        for(auto& pair : count)
        uniqueCount.insert(pair.second);

        return uniqueCount.size()==count.size();
    }
};