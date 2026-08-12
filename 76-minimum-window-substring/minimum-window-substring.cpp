class Solution {
public:
    string minWindow(string s, string t) {
        int m = s.length();
        int n = t.length();
        if(m < n) {
            return "";
        }

        unordered_map<char, int> mp;

        for(int x : t) {
            mp[x]++;
        }

        int start = 0;
        int count = 0;
        int left = 0;
        int minlen = INT_MAX;

        for(int i=0; i<m; i++) {
            if(mp[s[i]] > 0) {
                count++;
            }
            
            mp[s[i]]--;

            while(count == n) {
                if(i - left + 1 < minlen) {
                    minlen = i - left + 1;
                    start = left;
                }

                mp[s[left]]++;

                if(mp[s[left]] > 0) {
                    count--;
                }

                left++;
            }
        }
        if(minlen == INT_MAX) {
            return "";
        }

        return s.substr(start, minlen);
    }
};