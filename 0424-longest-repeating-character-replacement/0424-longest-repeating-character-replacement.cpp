class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0,right=0,maxLength=0,maxFreq=0;
        int n = s.size();
        unordered_map<char,int> freqCount;

        while(right<n){
            freqCount[s[right]]++;
            maxFreq = max(maxFreq,freqCount[s[right]]);
        
            int currentWindowSize = right - left + 1;
            if(currentWindowSize - maxFreq > k){
                freqCount[s[left]]--;
                left++;
            }

            if(currentWindowSize - maxFreq <= k){
             maxLength = max(maxLength, currentWindowSize);
            }
            right++;
        }
        return maxLength;
    }
};