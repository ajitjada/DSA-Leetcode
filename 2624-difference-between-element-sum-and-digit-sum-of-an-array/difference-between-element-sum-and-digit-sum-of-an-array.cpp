class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();
        int esum = 0;
        int sum = 0;

        for(int i=0; i<n; i++) {
            int j = 0;
            sum += nums[i];

            while(nums[i] > 0) {
                esum += nums[i] % 10;
                nums[i] /= 10;
            }
        }

        return abs(sum - esum);
    }
};