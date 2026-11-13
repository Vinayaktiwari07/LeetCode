class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> arr;

        int temp = n;
        while(temp > 0){
            int digit = temp % 10;
            arr.push_back(digit);
            temp /= 10;
        }

        int ans = 0;
        int pos = 0;
        for(int i=arr.size()-1; i>=0; i--){
            if(pos % 2 == 0){
                ans += arr[i];
            }else{
                ans -= arr[i];
            }
            pos++;
        }

        return ans;
    }
};