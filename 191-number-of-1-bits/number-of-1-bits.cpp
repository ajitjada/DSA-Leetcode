class Solution {
public:
    int hammingWeight(int n) {
        int ans = 0;

        while(n > 0) {
            long long dig = n % 2;
            if(dig == 1) {
                ans++;
            }
            n /= 2;
        }

        return ans; 
    }
};