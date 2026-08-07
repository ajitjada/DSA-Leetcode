class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        if(nums.size() == 1) {
            return nums;
        }
        int n = nums.size();
        vector<int> ans;

        unordered_map<int, int> m;

        priority_queue<pair<int, int>> pq;

        for(int i=0; i<n; i++) {
            m[nums[i]]++;
        }

        for(auto x : m) {
            pq.push({x.second, x.first});
        }

        while(k--) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};