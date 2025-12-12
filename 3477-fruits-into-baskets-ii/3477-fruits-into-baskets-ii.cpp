class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        int m = baskets.size();

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(fruits[i] <= baskets[j]){
                    baskets[j] = 0;
                    break;
                }
            }
        }

        int count = 0;
        for(int i = 0; i<m; i++){
            if(baskets[i] > 0){
                count++;
            }
        }

        return count;
    }
};