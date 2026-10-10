class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();
        vector<int> arr(n);
        long long moves = (long long)k1 + k2;
        long long sum = 0;
        int maxDiff = 0;

        for(int i=0; i<nums1.size(); i++){
            arr[i]  = abs(nums1[i] - nums2[i]);
            maxDiff = max(maxDiff, arr[i]);
            sum += arr[i];
        }

        if(moves >= sum){
            return 0;
        }

        // Step 3: frequency array
        vector<long long> freq(maxDiff+1, 0);
        for(int d : arr) freq[d]++;

        // Step 4: distribute moves in batches
        for(int d = maxDiff; d > 0 && moves > 0; d--){
            if(freq[d] == 0) continue;
            long long take = min(moves, freq[d]);
            freq[d] -= take;
            freq[d-1] += take;
            moves -= take;
        }

        // Step 5: sum of squares
        long long ans = 0;
        for(int d = 0; d <= maxDiff; d++){
            if(freq[d] > 0){
                ans += 1LL * d * d * freq[d];
            }
        }
        return ans;

        // // queue use kr ke
        // priority_queue<int> pq(arr.begin(), arr.end());

        // // Step 4: reduce largest diffs
        // while(moves > 0 && pq.top() > 0){
        //     int x = pq.top(); pq.pop();
        //     pq.push(x-1);
        //     moves--;
        // }

        // // Step 5: sum of squares
        // long long ans = 0;
        // while(!pq.empty()){
        //     long long x = pq.top(); pq.pop();
        //     ans += x * x;
        // }

        // sort(arr.begin(), arr.end(), greater<int>());
        // int i=0;
        // while(moves>0){
        //     arr[i] = arr[i]-1;
        //     sort(arr.begin(), arr.end(), greater<int>());
        //     // if((i+1 < arr.size()) && arr[i] < arr[i+1]){
        //     //     i++;
        //     // }
        //     moves--;
        // }


        // long long ans = 0;
        // for(int i=0; i<arr.size(); i++){
        //     long long square = 1LL * arr[i] * arr[i];
        //     ans += square;
        // }

        // return ans;
    }
};