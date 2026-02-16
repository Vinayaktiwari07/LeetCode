class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        int n = bulbs.size();

        unordered_map<int, int> freq;

        for(int b : bulbs){
            freq[b]++;
        }

        vector<int> result;

        for (auto& entry : freq) {
            if (entry.second % 2 == 1) {
                result.push_back(entry.first);
            }
        }

        sort(result.begin(), result.end());

        return result;


    }
};