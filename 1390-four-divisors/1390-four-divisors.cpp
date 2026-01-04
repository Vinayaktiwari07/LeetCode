class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int n = nums.size();

        int sum = 0;
        for(int i=0; i<n; i++){
            int temp = nums[i];
            int count = 0;
            int sumi = 0;
            for(int j=1;j* j<=temp; j++){
                if (temp % j == 0) {
                    if (j == temp / j) {
                        count++;
                        sumi += j;
                    } else {
                        count += 2;
                        sumi += j + (temp / j);
                    }

                    if (count > 4) break;
                }
            }
            if(count == 4){
                sum += sumi;
            }
            
        }

        return sum;
    }
};