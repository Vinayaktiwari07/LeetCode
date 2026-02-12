class Solution {
public:
    bool isSameAfterReversals(int num) {
        string nums = to_string(num);

        reverse(nums.begin(), nums.end());
        int first = stoi(nums);

        string again = to_string(first);
        reverse(again.begin(), again.end());
        int second = stoi(again);

        return (second == num); 
    }
};