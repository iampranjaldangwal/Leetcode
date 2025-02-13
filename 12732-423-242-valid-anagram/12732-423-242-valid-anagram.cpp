class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()){
            return false;
        }

        unordered_map<char,int> map1;
        unordered_map<char,int> map2;

        for(char c : s){
            map1[c]++ ;
        }

        for(char c : t){
            map2[c]++ ;
        }

        return map1 == map2;
    }
};