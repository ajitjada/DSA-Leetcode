class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int, int>> arr;

        unordered_map<int, int> mp;

        for(int x : nums) {
            int dig = x;
            int sum = 0;

            while(dig > 0) {
                sum += dig % 10;
                dig /= 10;
            }

            arr.push_back({sum, x});
        }

        sort(arr.begin(), arr.end());

        for(int i=0; i<n; i++) {
            mp[nums[i]] = i;
        }

        int ans = 0;

        for(int i=0; i<n; i++) {
            if(nums[i] != arr[i].second) {
                ans++;

                int j = mp[arr[i].second];

                mp[nums[i]] = j;
                mp[nums[j]] = i;

                swap(nums[i], nums[j]);
            }
        }

        return ans;
    }
};