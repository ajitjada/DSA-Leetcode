class Solution {
public:
    vector<string> ans;
    vector<string> mp = {
        "", "", "abc", "def", "ghi",
        "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    void solve(string &digits, int idx, string &curr) {
        if(idx == digits.size()) {
            ans.push_back(curr);
            return;
        }

        int digit = digits[idx] - '0';
        for(char ch : mp[digit]) {
            curr.push_back(ch);

            solve(digits, idx + 1, curr);

            curr.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.length() == 0) {
            return {};
        }

        string curr = "";

        solve(digits, 0, curr);

        return ans;
    }
};