class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        vector<long long> arr(n);
        for(int i=0; i<n; i++){
            arr[i] = 1LL * nums[i] * nums[i];
        }

        sort(arr.begin(), arr.end());

        int i = 0;
        int j = n-1;
        long long ans = 0;

        if(n%2 == 0){
            while(i<j){
                int temp = arr[j] - arr[i];
                i++;
                j--;
                ans += temp;
            }
        }else{
            while(i<j){
                long long temp = arr[j] - arr[i];
                i++;
                j--;
                ans += temp;
            }
            ans += arr[j];
        }

        return ans;
    }
};