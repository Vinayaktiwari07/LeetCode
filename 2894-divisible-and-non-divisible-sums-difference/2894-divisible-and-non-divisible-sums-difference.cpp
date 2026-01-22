class Solution {
public:
    int differenceOfSums(int n, int m) {
        int divsum = 0;
        int notdivsum = 0;
        for(int i=1; i<=n; i++){
            if(i%m == 0){
                divsum += i;
            }
            else{
                notdivsum += i;
            }
        }

        return notdivsum - divsum;
    }
};