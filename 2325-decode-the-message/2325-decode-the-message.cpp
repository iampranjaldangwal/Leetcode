class Solution {
public:
    string decodeMessage(string key, string message) {
       unordered_map<char,char> mp;
       string decode = "";
       char ch = 'a';
       for(char c : key){
        if(mp.find(c) == mp.end() && c!=' '){
           mp.emplace(c,ch);
           ch++;
        }
       }
       mp.emplace(' ',' ');
       for(char m : message)
        if(mp.find(m)!=mp.end())
        decode += mp[m];
    return decode;
    }
};