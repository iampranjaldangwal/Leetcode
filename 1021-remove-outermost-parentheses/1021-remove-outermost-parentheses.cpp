class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string result;
        int n = s.size();
        int i = 0;
        while(i<n){
            if(s[i] == '(' ){
               if(!st.empty())
                result.push_back(s[i]);
              st.push('(');
            }
            else if(s[i] == ')'){
              st.pop();
            if(!st.empty())
              result.push_back(s[i]);
            }
            i++;
        }
        return result;
    }
};