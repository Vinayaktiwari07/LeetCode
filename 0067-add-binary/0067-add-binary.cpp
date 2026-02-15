class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.size();
        int m = b.size();


        int i = n - 1;
        int j = m - 1;

        string str = "";
        int rem = 0;

        while (i >= 0 || j >= 0 || rem) {
            int sum = rem;

            if (i >= 0) {
                sum += a[i] - '0';
                i--;
            }
            if (j >= 0) {
                sum += b[j] - '0';
                j--;
            }

            str.push_back((sum % 2) + '0');
            rem = sum / 2;
        }

        reverse(str.begin(), str.end());
        return str;
    }
};