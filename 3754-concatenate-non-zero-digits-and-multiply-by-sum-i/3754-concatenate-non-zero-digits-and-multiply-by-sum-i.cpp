class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        string result = "";

        for (char c : s) {
            if (c != '0')
                result += c;
        }
        if (result.empty())
            return 0;

        int sum = 0;
        for(int i=0; i<result.size(); i++){
            sum += result[i] - '0';
        }

        int ans = stoi(result);

        return 1LL * ans * sum;
    }
};