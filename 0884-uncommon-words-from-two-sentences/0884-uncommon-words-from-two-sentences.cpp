class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> wordCount;
        vector<string> uncommonWords;

        string combined = s1 + " " + s2;
        stringstream ss(combined);
        string word;

        while(ss >> word)
         wordCount[word]++;

        for(const auto& entry : wordCount ){
            if(entry.second == 1)
              uncommonWords.push_back(entry.first);
        }
        return uncommonWords;
    }
};