
class Solution {
public:
    bool canAssign(vector<int>& jobs, vector<int>& workers,
                   int idx, int limit) {

        if (idx == jobs.size())
            return true;

        int job = jobs[idx];

        for (int i = 0; i < workers.size(); i++) {

            if (workers[i] + job > limit)
                continue;

            workers[i] += job;

            if (canAssign(jobs, workers, idx + 1, limit))
                return true;

            workers[i] -= job;

            // All empty workers are equivalent
            if (workers[i] == 0)
                break;
        }

        return false;
    }

    int minimumTimeRequired(vector<int>& jobs, int k) {
        sort(jobs.rbegin(), jobs.rend());

        int low = jobs[0];
        int high = accumulate(jobs.begin(), jobs.end(), 0);

        while (low < high) {
            int mid = low + (high - low) / 2;

            // Fresh worker loads for every binary search check
            vector<int> workers(k, 0);

            if (canAssign(jobs, workers, 0, mid)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};
