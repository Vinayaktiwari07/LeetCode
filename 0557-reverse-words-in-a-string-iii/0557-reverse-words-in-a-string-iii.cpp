class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        vector<string> arr;
        
        int start = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == ' '){
                if(start < i) { // avoid empty words
                    arr.push_back(s.substr(start, i - start));
                }
                start = i + 1;
            }
        }

        // last word add karo
        if(start < n){
            arr.push_back(s.substr(start, n - start));
        }

        // reverse each word
        for(int i = 0; i < arr.size(); i++){
            reverse(arr[i].begin(), arr[i].end());
        }

        // join words
        string result = "";
        for(int i = 0; i < arr.size(); i++){
            result += arr[i];
            if(i != arr.size() - 1) result += " ";
        }

        return result;
        
    }
};