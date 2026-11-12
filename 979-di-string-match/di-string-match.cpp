class Solution {
public:
    vector<int> diStringMatch(string s) {
        int st = 0;
        int end = s.length();
        vector<int> ans;

        for(int i=0; i<s.length(); i++) {
            if(s[i] == 'I') {
                ans.push_back(st);
                st++;
            } else {
                ans.push_back(end);
                end--;
            }
        }

        ans.push_back(st);

        return ans;
    }
};