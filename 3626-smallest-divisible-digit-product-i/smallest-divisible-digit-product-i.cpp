class Solution {
public:
    int smallestNumber(int n, int t) {

        while(true) {

            int ans = n;
            int prod = 1;
            
            while(ans != 0) {
                prod *= ans % 10;  
                ans /= 10;
            }

            if(prod % t == 0) {
                return n;
            } 

            n++;
        }

        return n;
    }
};