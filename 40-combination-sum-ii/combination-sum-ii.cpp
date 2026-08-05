class Solution {
public:
    void getAllCombination(vector<int> &arr, int idx, int tar, vector<vector<int>> &ans, vector<int> &combin) {
        if(tar == 0) {
            ans.push_back(combin);
            return;
        }

        if(idx == arr.size() || tar < 0) {
            return;
        }

        for(int i=idx; i<arr.size(); i++) {
            if(i > idx &&  arr[i] == arr[i-1]) {
                continue;
            }
            if(arr[i] > tar) {
                break;
            }

            combin.push_back(arr[i]); 

            getAllCombination(arr, i+1, tar-arr[i], ans, combin);

            combin.pop_back();

        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> combin;

        getAllCombination(candidates, 0, target, ans, combin);

        return ans;
    }
};