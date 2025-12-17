class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n = nums.size();
        int m = n/2;
        vector<double> avg;

        sort(nums.begin(), nums.end());

        int i=0, j=n-1;
        int temp = m;
        while(temp>0){
            avg.push_back((nums[i]+nums[j])/2.0);
            i++;
            j--;
            temp--;
        }

        sort(avg.begin(), avg.end());

        return avg[0];



    }
};