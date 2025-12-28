class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        int m = arr2.size();
        vector<int> arr;
        vector<bool> used(n, false);

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if (!used[j] && arr2[i] == arr1[j]) {
                    arr.push_back(arr1[j]);
                    used[j] = true;
                }
            }
        }

        vector<int> rem;
        for (int j = 0; j < n; j++) {
            if (!used[j]) {
                rem.push_back(arr1[j]);
            }
        }

        sort(rem.begin(), rem.end());
        for (int x : rem) {
            arr.push_back(x);
        }

        return arr;
    }
};