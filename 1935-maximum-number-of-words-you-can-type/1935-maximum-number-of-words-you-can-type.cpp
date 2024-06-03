class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> s(brokenLetters.begin(),brokenLetters.end());
        stringstream ss(text);
        int count = 0;
        string word;
        while(ss >> word){
            bool canType = true;
        for(char ch : word){
           if(s.find(ch)!=s.end()){
             canType = false;
             break;
           }
         }
         if(canType)
         count++;
        }
        return count;
    }
};