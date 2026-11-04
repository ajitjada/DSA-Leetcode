class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int st = 0;
        int end = nums.size() - 1;
        int ans = 0;

        while(st < end) {
            if(nums[st] + nums[end] < target) {
                ans += end - st;
                st++;
            } else {
                end--;
            }
        }

        return ans;
    }
};