class Solution {
public:
    int commonFactors(int a, int b) {
        // vector<int> arr;
        // vector<int> brr;

        // for(int i=1; i<=a; i++){
        //     if(a%i == 0){
        //         arr.push_back(i);
        //     }
        // }
        // for(int i=1; i<=b; i++){
        //     if(b%i == 0){
        //         arr.push_back(i);
        //     }
        // }

        // int count = 0;
        // for(int i=0; i<arr.size(); i++){
        //     if(arr[i] == brr[i]){
        //         count++;
        //     }
        // }

        // return count;

        int count = 0;

        for(int i=1; i<=a; i++){
            if(a%i==0 && b%i==0){
                count++;
            }
        }
        return count;
        
    }
};