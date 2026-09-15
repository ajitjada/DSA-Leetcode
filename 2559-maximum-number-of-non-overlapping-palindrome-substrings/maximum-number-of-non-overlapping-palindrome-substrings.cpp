class Solution {
public:
    int maxPalindromes(string s, int k) {
        int n = s.size();

        // dp[i] = maximum number of non-overlapping
        // palindromes we can get from index i to n-1
        vector<int> dp(n + 1, 0);

        // pal[i][j] = true if s[i...j] is palindrome
        vector<vector<bool>> pal(n, vector<bool>(n, false));

        // Build palindrome table
        for (int i = n - 1; i >= 0; i--) {
            for (int j = i; j < n; j++) {
                if (s[i] == s[j] &&
                    (j - i <= 2 || pal[i + 1][j - 1])) {
                    pal[i][j] = true;
                }
            }
        }

        // DP from right to left
        for (int i = n - 1; i >= 0; i--) {

            // Don't take a palindrome starting at i
            dp[i] = dp[i + 1];

            // Try every ending position
            for (int j = i + k - 1; j < n; j++) {

                if (pal[i][j]) {
                    dp[i] = max(dp[i], 1 + dp[j + 1]);
                }
            }
        }

        return dp[0];
    }
};