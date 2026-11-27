
class Solution {
public:
    bool dfs(vector<int>& matchsticks, int index,
             int sides[4], int target) {

        if (index == matchsticks.size()) {
            return sides[0] == target &&
                   sides[1] == target &&
                   sides[2] == target;
        }

        int stick = matchsticks[index];

        for (int i = 0; i < 4; i++) {

            if (sides[i] + stick > target)
                continue;

            sides[i] += stick;

            if (dfs(matchsticks, index + 1, sides, target))
                return true;

            sides[i] -= stick;

            // Avoid trying equivalent empty sides
            if (sides[i] == 0)
                break;
        }

        return false;
    }

    bool makesquare(vector<int>& matchsticks) {
        int total = accumulate(
            matchsticks.begin(),
            matchsticks.end(),
            0
        );

        if (total % 4 != 0)
            return false;

        int target = total / 4;

        sort(matchsticks.rbegin(), matchsticks.rend());

        if (matchsticks[0] > target)
            return false;

        int sides[4] = {0, 0, 0, 0};

        return dfs(matchsticks, 0, sides, target);
    }
};
