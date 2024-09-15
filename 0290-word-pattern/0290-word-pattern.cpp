class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        stringstream ss(s);
        string word;

        while(ss >> word )
        words.push_back(word);

        if(words.size() != pattern.size())
        return false;

        unordered_map<char,string> mp1;
        unordered_map<string,char> mp2;

        int n = pattern.size();

        for(int i=0;i<n;i++){
           char p = pattern[i];
           string w = words[i];

           if(mp1.count(p) && mp1[p] != w )
           return false;

           if(mp2.count(w) && mp2[w] != p)
           return false;

           mp1[p] = w;
           mp2[w] = p;
        }
        return true;
    }
};