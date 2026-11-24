class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int count = 0;

        for(int i=left; i<=right; i++) {
            int num = i;
            int ans = 0;
            bool isPrime = true;

            while(num > 0) {
                if(num % 2 == 1) {
                    ans++;
                }
                num /= 2;
            }

            for(int i=2; i*i<=ans; i++) {
                if(ans % i == 0) {
                    isPrime = false;
                    break;
                }
            }

            if(isPrime && ans != 1) {
                count++;
            }
        }

        return count;
    }
};