class Solution {
public:
    string reverseWords(string s) {
        int st = 0;
        int end;
        for(int i=0; i<s.length(); i++) {
            if(s[i] == ' ') {
                end = i - 1;
                while(st < end) {
                    swap(s[st], s[end]);
                    st++;
                    end--;
                }
                st = i + 1;
            }
        }

        end = s.length() - 1;

        while(st < end) {
            swap(s[st], s[end]);
            st++;
            end--;
        }

        return s;
    }
};