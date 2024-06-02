class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int> mp;
        for(int i=1;i<=highLimit;i++)
        mp[i] = 0;

        for(int i=lowLimit;i<=highLimit;i++){
            int num = i,sum=0;
            while(num>0){
                sum += num % 10;
                num /= 10;
            }
            mp[sum]++;
        }
        int maxBalls = 0;
        for(auto& n:mp)
            maxBalls = max(maxBalls,n.second);
        return maxBalls;
    }
};