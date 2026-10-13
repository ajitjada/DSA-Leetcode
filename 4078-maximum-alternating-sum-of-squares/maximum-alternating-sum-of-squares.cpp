class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](int a, int b) {
            return abs((long long)a) < abs((long long)b);
        });

        int n = nums.size();
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            if (i < n/2) {
                ans -= nums[i] * nums[i];
            } else {
                ans += nums[i] * nums[i];
            }
        }

        return ans;
    }
};