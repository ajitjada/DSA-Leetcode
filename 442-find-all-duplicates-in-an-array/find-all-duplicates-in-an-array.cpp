class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;

        vector<int> freq(n+1, 0);

        for(int x : nums) {
            freq[x]++;
            
            if(freq[x] == 2) {
                ans.push_back(x);
            }
        }

        return ans;
    }
};