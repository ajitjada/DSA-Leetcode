class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left; i<=right; i++) {
            int temp = i;
            bool t = true;
            while(temp > 0) {
                int dig = temp % 10;
                if(dig == 0) {
                    t = false;
                    break;
                }
                if(i % dig != 0) {
                    t = false;
                    break;
                }
                temp /= 10;
            }
            if(t && i % 10 != 0) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};