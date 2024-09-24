class Solution {
public:
    int lengthOfLastWord(string s) {
    vector<string> vec;
    stringstream ss(s);
    string word;

    while (ss >> word)
        vec.push_back(word);
    
    if(!vec.empty())
     return vec.back().length();
    
    return 0;
    }
};