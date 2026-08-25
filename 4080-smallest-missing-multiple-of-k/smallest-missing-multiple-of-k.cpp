class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> s(nums.begin(), nums.end());

        int p = k;

        while(s.find(p) != s.end()) {
            p += k;
        }

        return p;
    }
};