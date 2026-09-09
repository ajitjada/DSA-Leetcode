class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;
        long long t = 1000;

        while(t <= n) {
            ans += n - t + 1;

            if(t > n / 1000) {
                break;
            }

            t *= 1000;
        }

        return ans;
    }
};