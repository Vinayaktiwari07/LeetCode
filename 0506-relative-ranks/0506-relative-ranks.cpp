class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        map<int, string> myMap;

        priority_queue<int> pq;

        for(int i=0; i<n; i++){
            pq.push(score[i]);
        }

        for(int i=0; i<n; i++){
            if(i==0){
                myMap[pq.top()] = "Gold Medal";
            }
            else if(i==1){
                myMap[pq.top()] = "Silver Medal";
            }
            else if(i==2){
                myMap[pq.top()] = "Bronze Medal";
            }
            else{
                myMap[pq.top()] = to_string(i + 1);
            }
            pq.pop();
        }

        vector<string> ans(n);
        for(int i=0; i<n; i++){
            ans[i] = myMap[score[i]];
        }

        return ans;



    }
};