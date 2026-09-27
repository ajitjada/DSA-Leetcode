class Solution {
public:
    string reverseParentheses(string s) {
        vector<char> st;

        for(char c : s) {
            if(c == ')') {
                
                vector<char> temp;

                while(st.back() != '(') {
                    temp.push_back(st.back());
                    st.pop_back();
                }

                st.pop_back();

                for(char x : temp) {
                    st.push_back(x);
                }
            } else {
                st.push_back(c);
            }
        }

        return string(st.begin(), st.end());
    }
};