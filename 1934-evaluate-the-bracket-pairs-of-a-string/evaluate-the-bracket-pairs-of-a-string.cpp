class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n = s.length();
        int idx = 0;
        unordered_map<string, string> mp;
        string ans = "";

        for(int i=0; i<knowledge.size(); i++) {
            mp[knowledge[i][0]] = knowledge[i][1];
        }

        while(idx < n) {
            if(s[idx] == '(') {
                idx++;
                int i = idx;
                string t = "";

                while(s[i] != ')') {
                    t += s[i];
                    i++;
                }

                if(mp.find(t) != mp.end()) {
                    ans += mp[t];
                } else {
                    ans += '?';
                }
                
                idx = i;
            }

            if(s[idx] != ')') {
                ans += s[idx];
            }
            
            idx++;
        }

        return ans;
    }
};