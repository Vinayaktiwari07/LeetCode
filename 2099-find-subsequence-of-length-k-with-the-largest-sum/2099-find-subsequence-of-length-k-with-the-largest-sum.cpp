class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        int n = nums.size();
        vector<pair<int,int>> arr;
        priority_queue<pair<int,int>> pq;

        for(int i=0; i<n; i++){
            pq.push({nums[i], i});
        }

        for(int i=0; i<k; i++){
            arr.push_back(pq.top());
            pq.pop();
        }

        sort(arr.begin(), arr.end(), [](const pair<int,int>& a, const pair<int,int>& b){
            return a.second < b.second;
        });

        vector<int> res;
        res.reserve(k);
        for(int i = 0; i < arr.size(); i++) {
            res.push_back(arr[i].first);
        }
        return res;
    }
};