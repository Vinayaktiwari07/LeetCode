class Solution {
public:
    string sortSentence(string s) {
        vector<string> words(10); // max 9 words
        
        string temp = "";
        
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                int idx = temp.back() - '0';
                temp.pop_back();
                words[idx] = temp;
                temp = "";
            }
            else{
                temp += s[i];
            }
        }
        
        // last word handle
        int idx = temp.back() - '0';
        temp.pop_back();
        words[idx] = temp;
        
        // build answer
        string ans = "";
        for(int i = 1; i < 10; i++){
            if(words[i] != ""){
                ans += words[i] + " ";
            }
        }
        
        ans.pop_back(); // remove last space
        return ans;
    }
};