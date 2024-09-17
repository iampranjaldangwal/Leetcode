class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> words;
        stringstream ss1(s1);
        string word1;
        while(ss1 >> word1)
        words.push_back(word1);
        
        stringstream ss2(s2);
        string word2;
        while(ss2 >> word2)
        words.push_back(word2);
        
        vector<string> output;
        unordered_map<string,int> mp;
        int n = words.size();

        for(int i=0;i<n;i++)
         mp[words[i]]++;
        
        for(int i=0;i<n;i++){
         if(mp[words[i]] == 1)
          output.push_back(words[i]);
        }
    return output;
    }
};