class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // priority_queue<int> pq;
        priority_queue<int, vector<int>, greater<int>> pq;
        int n = nums.size();

    for(auto & x: nums){
        pq.push(x);
        if(pq.size() > k){
            pq.pop();
        }
    }

    // cout << pq.top() << endl;
    return pq.top();
    }
};