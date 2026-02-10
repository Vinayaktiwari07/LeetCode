class Solution {
public:
    bool isVowel(char c) {
        string vowels = "aeiouAEIOU";
        return vowels.find(c) != string::npos;
    }

    string reverseVowels(string s) {
        int n = s.size();

        int l = 0;
        int h = n-1;

        while(l<h){
            if (isVowel(s[l]) && isVowel(s[h])){
                swap(s[l], s[h]);
                l++;
                h--;
            }
            else if(!isVowel(s[l])){
                l++;
            }
            else{
                h--;
            }

        }

        return s;
    }
};