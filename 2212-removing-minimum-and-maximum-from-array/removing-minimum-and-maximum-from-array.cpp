class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        if(n == 1 || n == 2) {
            return n;
        }

        int mx = *max_element(nums.begin(), nums.end());
        int mn = *min_element(nums.begin(), nums.end());

        int maxI = 0;
        int minI = 0;

        for(int i=0; i<n; i++) {
            if(nums[i] == mx) {
                maxI = i;
            }
            if(nums[i] == mn) {
                minI = i;
            }
        }

        int left = min(maxI, minI);
        int right = max(maxI, minI);

        return min({left+1+n-right, right+1, n-left});
    }
};