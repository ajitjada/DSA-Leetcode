class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max = nums[0];
        int sum = 0;
        
        for(int i=0; i<nums.size(); i++) {
            if(max < nums[i]) {
                max = nums[i];
            }

            sum += nums[i];
        }

        return max * nums.size() - sum;

    }
};