class Solution {
public:
    int countDigits(int num) {
        vector<int> arr;
        string s = to_string(num);

        for(int i = 0; i < s.size(); i++){
            int d = s[i] - '0';
            if(d != 0 && num % d == 0){
                arr.push_back(d);
            }
        }

        int count = 0;
        for(int i = 0; i < arr.size(); i++){
            count++;
        }

        return count;

    }
};