class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = needle.length();
        int n = haystack.length();
        
        if (m == 0) return 0; // Edge case: empty needle

        for (int i = 0; i <= n - m; i++) {
            int j = 0;
            while (j < m && haystack[i + j] == needle[j])
              j++;

            if (j == m)
              return i; // Found the substring starting at index i
        }
        return -1; // Not found
    }
};
