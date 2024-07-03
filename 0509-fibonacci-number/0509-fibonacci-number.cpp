class Solution {
public:
    int fibHelper(int n,unordered_map<int,int>& memo){
        if(n==0 || n==1) return n;
        if(memo.find(n) != memo.end()) return memo[n];
        memo[n] = fibHelper(n-1,memo) + fibHelper(n-2,memo);
        return memo[n];
    }

    int fib(int n) {
        unordered_map<int,int> memo;
        return fibHelper(n,memo);
    }
};