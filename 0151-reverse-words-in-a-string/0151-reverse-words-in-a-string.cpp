class Solution {
public:
    string reverseWords(string s) {
        vector<string> vec;
        stringstream ss(s);
        string word;
        
        while(ss >> word)
          vec.push_back(word);

        reverse(vec.begin(),vec.end());
        
        string result = accumulate(vec.begin()+1,vec.end(),vec[0],
        [](string a,string b) {return a + " " + b;});

        return result;
    }
};