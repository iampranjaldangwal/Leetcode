class Solution {
public:
    string reverseWords(string s) {
        vector<string> vec;
        stringstream ss(s);
        string word;
        
        while(ss >> word)
          vec.push_back(word);

        reverse(vec.begin(),vec.end());
        
        string result ;

        for(const string& s : vec){
            if(!result.empty())
             result += " " + s;
            else
             result += s;
        }
        return result;
    }
};