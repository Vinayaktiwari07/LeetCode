class Solution {
public:
    bool check(vector<int> & piles, int h, int mid){
        int n = piles.size();
        int ans = 0;
        for(int i=0; i<n; i++){
            long long time = (piles[i] + mid - 1) / mid;
            ans += time;

            if (ans > h) return false;
        }

        return ans <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (check(piles, h, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};