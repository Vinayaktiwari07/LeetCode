class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int n = nums.size();

        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0; i<n; i++){
            pq.push(nums[i]);
        }

        vector<int> arr;
        for(int i=0; i<n/2; i++){
            int first = pq.top();
            pq.pop();
            int second = pq.top();
            pq.pop();

            arr.push_back(second);
            arr.push_back(first);
        }

        return arr;
    }
};