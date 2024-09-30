class Solution {
public:
    int myAtoi(string s) {
        long result = 0;
        int n = s.size();
        int i = 0;
        int sign = 1;
        while(i<n && s[i] == ' ')
         i++;

        if(s[i] == '-'){
          sign = -1;
          i++;
         }
        else if(s[i] == '+')
         i++;

        while(i<n && isdigit(s[i])){
              result =  result * 10 + (s[i] - '0');
              if(result > INT_MAX && sign == -1)
               return INT_MIN;
              else if(result > INT_MAX && sign == 1)
               return INT_MAX;
            i++;
        }
        return result*sign;
    }
};