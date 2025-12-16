class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int maxi = INT_MIN;

        for(int i=0; i<n; i++){
            stringstream ss(sentences[i]);
            string word;
            int count = 0;

            while (ss >> word) {
                count++;
            }
            if(count>maxi){
                maxi = count;
            }
        }

        return maxi;

    }
};