class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> s;

        while(n != 1) {

            if(s.count(n)) {
                return false;
            }
            int dig = n;
            int sum = 0;
            while(dig > 0) {
                int t = dig % 10;
                sum += t * t;
                dig /= 10;
            }
            s.insert(n);
            n = sum;
        }
        
        return true;
    }
};