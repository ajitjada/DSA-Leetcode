class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n = words.size();
        int ans = 0;
        unordered_set<char> st(allowed.begin(), allowed.end());

        for(int i=0; i<n; i++) {
            bool an = true;
            for(int j=0; j<words[i].length(); j++) {
                if(st.find(words[i][j]) == st.end()) {
                    an = false;
                    break;
                }
            }

            if(an) {
                ans++;
            }
        }

        return ans;
    }
};