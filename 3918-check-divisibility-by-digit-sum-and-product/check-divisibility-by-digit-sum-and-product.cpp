class Solution {
public:
    bool checkDivisibility(int n) {
        int k = n;
        int sumdig = 0;
        int prodig = 1;

        while(k > 0) {
            sumdig += k % 10;
            prodig *= k % 10;
            k /= 10;
        }

        int m = sumdig + prodig;

        if(n % m == 0) {
            return true;
        }

        return false;
    }
};