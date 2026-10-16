class Solution {
public:
    int subtractProductAndSum(int n) {
        long long prod = 1;
        int sum = 0;

        while(n > 0) {
            prod = prod * (n % 10);
            sum = sum + (n % 10);

            n /= 10;
        }

        return prod - sum;
    }
};