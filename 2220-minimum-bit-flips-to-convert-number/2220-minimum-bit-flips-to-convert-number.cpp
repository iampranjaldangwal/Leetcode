class Solution {
public:
    int minBitFlips(int start, int goal) {
        int result = start ^ goal ;
        int minBits = __builtin_popcount(result);
        return minBits;
    }
};