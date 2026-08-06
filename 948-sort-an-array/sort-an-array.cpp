class Solution {
public:
    void merge(vector<int> &nums, int st, int mid, int end) {
        vector<int> ans;

        int i = st;
        int j = mid + 1;

        while(i <= mid && j <= end) {
            if(nums[i] < nums[j]) {
                ans.push_back(nums[i]);
                i++;
            } else {
                ans.push_back(nums[j]);
                j++;
            }
        }

        while(i <= mid) {
            ans.push_back(nums[i]);
            i++;
        }

        while(j <= end) {
            ans.push_back(nums[j]);
            j++;
        }

        for(int i=st; i<=end; i++) {
            nums[i] = ans[i - st];
        }
    }

    void mergeSort(vector<int> &nums, int st, int end) {
        if(st >= end) {
            return;
        }

        int mid = st + (end - st) / 2;

        mergeSort(nums, st, mid);
        mergeSort(nums, mid+1, end);

        merge(nums, st, mid, end);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);

        return nums; 
    }
};