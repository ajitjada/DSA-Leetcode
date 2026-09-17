class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    
    void helper(int st, int n, int k) {
        
        if(temp.size() == k) {
            ans.push_back(temp);
            return;
        }

        for(int i=st; i<=n; i++) {
            temp.push_back(i);

            helper(i+1, n, k);

            temp.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        
        helper(1, n, k);

        return ans;
    }
};