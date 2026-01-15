class Solution {
public:
    string toBinary(int num) {
        string bin = "";
        while (num > 0) {
            bin = char('0' + (num % 2)) + bin;
            num /= 2;
        }
        return bin;
    }
    string convertDateToBinary(string date) {
        string year = date.substr(0, 4);
        string month = date.substr(5, 2);
        string day = date.substr(8, 2);

        // Convert to integer
        int y = stoi(year);
        int m = stoi(month);
        int d = stoi(day);

        // Convert to binary
        string by = toBinary(y);
        string bm = toBinary(m);
        string bd = toBinary(d);

        // Final result
        return by + "-" + bm + "-" + bd;
    }
};