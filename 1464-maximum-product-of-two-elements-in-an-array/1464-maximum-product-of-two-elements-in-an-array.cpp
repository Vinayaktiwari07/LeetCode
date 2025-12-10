class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        priority_queue<int> pq;

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                pq.push((nums[i]-1)*(nums[j]-1));
            }
        }

        return pq.top();

    }
};