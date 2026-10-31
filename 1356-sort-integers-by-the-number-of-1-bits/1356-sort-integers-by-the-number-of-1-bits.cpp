class Solution {
public:
    static int countBit(int n){
        int count = 0;

        while(n>0){
            count += (n%2);
            n /= 2;
        }
        return count;
    }

    static bool compare(int a, int b){
        int x = countBit(a);
        int y = countBit(b);

        if(x == y){
            return a<b;
        }

        return x<y;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), compare);

        return arr;
    }
}; 