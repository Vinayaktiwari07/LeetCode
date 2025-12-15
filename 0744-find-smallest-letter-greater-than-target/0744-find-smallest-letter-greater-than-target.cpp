class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();

        bool flag = false;
        char ans;
        for(int i=0; i<n; i++){
            if(letters[i] > target){
                flag = true;
                ans = letters[i];
                // return;
                // cout << letters[i];
                break;
            }
        }

        if(flag == true){
            return ans;
        }
        return letters[0];
    }
};