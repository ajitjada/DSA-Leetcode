class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int> ans;

        for(int i=0; i<n-1; i++) {
            if(i < n-1 && nums[i+1] != nums[i] + 1) {
                int count = nums[i+1] - nums[i];
                int k = nums[i];
                while(count != 1) {
                    k = k + 1;
                    ans.push_back(k);
                    count--;
                }
            }
        }

        return ans;
    }
};