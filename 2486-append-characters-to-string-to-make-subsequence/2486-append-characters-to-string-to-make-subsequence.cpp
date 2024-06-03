class Solution {
public:
    int appendCharacters(string s, string t) {
        vector<char> p;
        int n = s.size();
        int m = t.size();
        int i = 0,j=0;
        while(i<n && j<m){
            if(s[i]==t[j]){
             p.push_back(t[j]);
             i++,j++;
            }
            else
            i++;
        }
        return m-p.size();
    }
};