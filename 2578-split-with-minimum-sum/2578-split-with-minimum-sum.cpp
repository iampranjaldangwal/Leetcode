class Solution {
public:
    int splitNum(int num) {

        string s = to_string(num);
        sort(s.begin(),s.end());
        int n = s.size();
        int num1=0,num2=0;
        for(int i=0;i<n;i+=2){
            num1 = num1*10+(s[i]-'0');
            if(i+1<n)
            num2 = num2*10+(s[i+1]-'0');
        }
        return num1+num2;

    }
};