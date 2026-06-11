/*
Problem: Longest Common Prefix
Leetcode #14

Approach:
Use first string as the Longest Common Prefix (LCP)
Compare it with each subsequent string and shorten the prefix at the first mismatch
Repeat until all strings have been processed

Time Complexity: O(n * m) | n = number of strings, m = length of shortest string
Space Complexity: O(1)
*/

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) {
        return "";
    }

    char* lcp = strs[0];

    for (int i = 1; i < strsSize; i++) {
        int j = 0;

        while (lcp[j] && strs[i][j] && lcp[j] == strs[i][j]) {
            j++;
        }

        lcp[j] = '\0';

        if (lcp[0] == '\0') {
            return "";
        }
    }

    return lcp;
}
