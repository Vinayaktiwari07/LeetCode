class Solution {
public:
    int maxDistance(string moves) {
        int x = 0;
        int y = 0;
        int underscore = 0;

        for (char c : moves) {
            if (c == 'L') {
                x--;
            } else if (c == 'R') {
                x++;
            } else if (c == 'U') {
                y++;
            } else if (c == 'D') {
                y--;
            } else {
                underscore++;
            }
        }

        return abs(x) + abs(y) + underscore;
    }
};