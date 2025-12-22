class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> arr;
        if(n==1){
            arr.push_back(0);
            return arr;
        }
        if(n%2==0){
            for(int i=0; i<n/2;i++){
                arr.push_back(i+1);
                arr.push_back(-(i+1));
            }
        }
        if(n%2==1){
            arr.push_back(0);
            for(int i=1; i<=(n/2);i++){
                arr.push_back(i);
                arr.push_back(-(i));
            }
        }

        return arr;
    }
};