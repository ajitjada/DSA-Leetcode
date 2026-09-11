class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n = digits.size();

        unordered_set<int> s;

        for(int i=0; i<n; i++) {
            if(digits[i] == 0) continue;

            int ans = digits[i];

            for(int j=0; j<n; j++) {
                if(i == j) continue;
                ans = ans * 10 + digits[j];

                for(int k=0; k<n; k++) {
                    if(i == k || j == k) continue;
                    ans = ans * 10 + digits[k];

                    if(ans % 2 == 0) {
                        if(s.find(ans) == s.end()) {
                            s.insert(ans);
                        }
                    }
                    ans /= 10;
                }

                ans /= 10;
            }
        }

        return s.size();
    }
};