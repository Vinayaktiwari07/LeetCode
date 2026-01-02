class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int n = encoded.size();

        vector<int> arr;
        arr.push_back(first);

        for(int i=0; i<n; i++){
            arr.push_back(arr[i]^encoded[i]);
        }

        return arr;
    }
};