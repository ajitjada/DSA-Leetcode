class Solution {
public:
    int digitFrequencyScore(int n) {
        int ans = 0;

        while(n > 0) {
            int dig = n % 10;
            ans += dig;
            n /= 10;
        }

        return ans;
    }
};