class Solution {
public:
    bool sumGame(string num) {

        

        int mid = num.length() / 2;
        int sumL = 0;
        int sumR = 0;
        int qL = 0;
        int qR = 0;

        for(int i=0; i<mid; i++) {
            if(num[i] != '?') {
                sumL += num[i] - '0';
            } else {
                qL++;
            }
        }

        for(int i=mid; i<num.size(); i++) {
            if(num[i] != '?') {
                sumR += num[i] - '0';
            } else {
                qR++;
            }
        }

        if((qL + qR) % 2 == 1) {
            return true;
        }

        return (sumL - sumR) != (qR - qL) / 2 * 9;
    }
};