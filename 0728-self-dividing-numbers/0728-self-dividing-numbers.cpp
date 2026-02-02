class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> arr;

        for(int i=left; i<=right; i++){
            int num = i;
            bool isValid = true;

            while(num>0){
                int digit = num%10;

                if(digit == 0 || i % digit != 0){
                    isValid = false;
                    break;
                }
                num /= 10;
                
            }
            if (isValid) {
                arr.push_back(i);
            }
        }

        return arr;
    }
};