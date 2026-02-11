class Solution {
public:
    int countMonobit(int n) {
        int count = 1;

        int num = 1;
        
        while(num <= n){
            count++;
            num = (num << 1) | 1;   // generate 1,3,7,15...
        }
        
        return count;
        // if(n == 0 ){
        //     return 1;
        // }
        // if(n == 1){
        //     return 2;
        // }
        // int count = 1;
        // for(int i=1; i<=n; i++){
        //     vector<int> binary;
        //     int temp = i;
        //     while (temp > 0) {
        //         binary.push_back(temp % 2);
        //         temp /= 2;
        //     }

        //     bool isMonobit = true;
        //     for(int j=0; j<binary.size()-1; j++){
        //         if(binary[j] != binary[j+1]){
        //             isMonobit = false;
        //             break;
        //         }
        //     }
        //     if(isMonobit){
        //         count++;
        //     }
        // }

        // return count;
    }
};