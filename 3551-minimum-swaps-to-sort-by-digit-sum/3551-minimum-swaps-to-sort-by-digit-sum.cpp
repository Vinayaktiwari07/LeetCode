class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        vector<pair<int, int>> arr;

        // Step 1: Store digit sum, number, original index
        for (int i = 0; i < n; i++) {
            int sum = 0;
            int temp = nums[i];

            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }

            arr.push_back({sum, nums[i]});
        }

        // Step 2: Sort by digit sum, then by number
        sort(arr.begin(), arr.end());

        // Step 3: Map each number to its original index
        unordered_map<int, int> pos;

        for (int i = 0; i < n; i++) {
            pos[nums[i]] = i;
        }

        vector<bool> visited(n, false);
        int swaps = 0;

        // Step 4: Detect cycles
        for (int i = 0; i < n; i++) {
            if (visited[i] || pos[arr[i].second] == i)
                continue;

            int j = i;
            int cycleSize = 0;

            while (!visited[j]) {
                visited[j] = true;

                int num = arr[j].second;
                j = pos[num];

                cycleSize++;
            }

            if (cycleSize > 1) {
                swaps += cycleSize - 1;
            }
        }

        return swaps;
    }
};