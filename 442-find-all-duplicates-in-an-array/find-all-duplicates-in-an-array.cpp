class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;

        unordered_map<int, int> mp;

        for(int x : nums) {
            mp[x]++;
            if(mp[x] == 2) {
                ans.push_back(x);
            }
        }

        return ans;
    }
};