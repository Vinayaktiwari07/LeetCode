class Solution {
public:
    int pivotInteger(int n) {
        int s = 1;
        int e = n;
        
        while(s<=e){
            int mid = s + (e - s)/2;

            int prev = 0;
            int nxt = 0;

            for(int i=1; i<=mid; i++){
                prev += i;
            }
            for(int j=mid; j<=n; j++){
                nxt += j;
            }

            if(prev == nxt){
                return mid;
            }
            else if(prev>nxt){
                e = mid-1;
            }
            else{
                s=mid+1;
            }

        }

        return -1;
    }
};