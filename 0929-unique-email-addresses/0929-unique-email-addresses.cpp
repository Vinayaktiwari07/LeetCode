class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int n = emails.size();
        vector<string> arr;

        for(int i = 0; i < n; i++){
            string str = emails[i];
            int at = str.find('@');

            // process only local part
            for(int j = 0; j < at; j++){
                if(str[j] == '.'){
                    str.erase(j,1);
                    j--;        // adjust index after erase
                    at--;       // '@' position shifts left
                }
                else if(str[j] == '+'){
                    str.erase(j, at - j); // remove until '@'
                    break;
                }
            }
            arr.push_back(str);
        }

        // remove duplicates
        for(int i = 0; i < arr.size(); i++){
            for(int j = i + 1; j < arr.size(); j++){
                if(arr[i] == arr[j]){
                    arr.erase(arr.begin() + j);
                    j--; // adjust index
                }
            }
        }

        return arr.size();
    }
};