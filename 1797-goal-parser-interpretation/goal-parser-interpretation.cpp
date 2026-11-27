class Solution {
public:
    string interpret(string command) {
        string ans;

        for(int i=0; i<command.length(); i++) {
            if(command[i] == '(' && command[i+1] == ')') {
                ans += 'o';
                i++;
            } else if(command[i] == 'G') {
                ans += 'G';
            } else {
                ans += 'a';
                ans += 'l';
                i += 3;
            }
        }

        return ans;
    }
};