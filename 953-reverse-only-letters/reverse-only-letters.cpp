class Solution {
public:
    string reverseOnlyLetters(string s) {
        string temp = s;
        string ans = "";

        int st = 0;
        int end = s.length() - 1;

        while(st < end) {
            if(!isalpha(s[st])) {
                st++;
            } else if(!isalpha(s[end])){
                end--;
            } else {
                swap(s[st], s[end]);
                st++;
                end--;
            }
        }

        return s;
    }
};