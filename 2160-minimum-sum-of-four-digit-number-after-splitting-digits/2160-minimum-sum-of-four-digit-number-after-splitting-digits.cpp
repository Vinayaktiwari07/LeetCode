class Solution {
public:
    int minimumSum(int num) {
        vector<int> arr;


        while(num > 0){
            int d = num%10;
            arr.push_back(d);
            num /= 10; 
        }
        sort(arr.begin(), arr.end());
        // int num1 = arr[0]*10
        int n = arr.size();
        int sum = 0;
        int i=0;
        int j=n-1;

        while(j>i){
            int sumi = (arr[i]*10)+arr[j];
            sum += sumi;
            i++;
            j--;
        }

        return sum;

    }
};