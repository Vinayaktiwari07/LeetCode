class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        int n1 = items1.size();
        // int m1 = items1[0].size();

        int n2 = items2.size();
        // int m2 = items2[0].size();

        // int k = 0;
        // vector<vector<int>> arr;
        // for(int i=0; i<n2; i++){
        //     if(items1[k][0] == items2[i][0]){
        //         arr.push_back(items1[k][1] + items2[i][1]);
        //         k++;
        //     }
        // }

        // return arr;
        map<int, int> mp;   


        for (int i = 0; i < n1; i++) {
            mp[items1[i][0]] += items1[i][1];
        }

   
        for (int i = 0; i < n2; i++) {
            mp[items2[i][0]] += items2[i][1];
        }

        vector<vector<int>> arr;
        for (auto it : mp) {
            arr.push_back({it.first, it.second});
        }

        return arr;

    }
};