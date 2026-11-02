class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> temp = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        unordered_set<string> ans;

        for(int i=0; i<words.size(); i++) {
            string t = "";

            for(int j=0; j<words[i].length(); j++) {
                t += temp[words[i][j] - 'a'];
            }

            ans.insert(t);
        }

        return ans.size();
    }
};