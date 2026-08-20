class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr1;
        vector<int> arr2;

        if(n == 2) {
            return nums;
        }

        int idxa = 0;
        int idxb = 0;

        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);

        for(int i=2; i<n; i++) { 
            if(arr1[idxa] > arr2[idxb]) {
                arr1.push_back(nums[i]);
                idxa++;
            } else {
                arr2.push_back(nums[i]);
                idxb++;
            }
        }

        idxa = 0;
        idxb = 0;
        int i = 0;
        int l = arr1.size();
        int m = arr2.size();

        while(idxa < l) {
            nums[i] = arr1[idxa];
            idxa++;
            i++;
        }

        while(idxb < m) {
            nums[i] = arr2[idxb];
            idxb++;
            i++;
        } 

        return nums;
    }
};