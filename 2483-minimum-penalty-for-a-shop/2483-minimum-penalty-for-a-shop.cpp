class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();

        int rightY = 0;
        for(char c : customers){
            if(c == 'Y') rightY++;
        }

        int leftN = 0;
        int minPenalty = rightY;
        int ans = 0;

        for(int i = 0; i < n; i++){
            if(customers[i] == 'Y') rightY--;
            else leftN++;

            int penalty = leftN + rightY;
            if(penalty < minPenalty){
                minPenalty = penalty;
                ans = i + 1;
            }
        }

        return ans;
    }
};