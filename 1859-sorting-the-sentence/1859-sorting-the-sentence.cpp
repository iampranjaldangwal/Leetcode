class Solution {
public:
    string sortSentence(string s) {
        vector<string> pos(10,"");
        for(int i=0;i<s.size();i++){
        string words = "";
        while(!isdigit(s[i]))
          words += s[i++];
        pos[s[i++]-'0'] = words;
        }
    string ans;
    for(int i=1;i<10;i++){
        if(pos[i].length()>0)
         ans += pos[i] +' ';
    }
    ans.pop_back();
    return ans;
    }
};