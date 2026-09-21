class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n = digits.size();
        int count = 0;
        set<int> st; // distinct numbers store karne ke liye

        for(int i=0; i<n; i++){
            int temp1 = digits[i] * 100;

            // leading zero check
            if(digits[i] == 0) continue;

            for(int j=0; j<n; j++){
                if(j == i) continue;
                int temp2 = digits[j] * 10;

                for(int k=0; k<n; k++){
                    if(k == i || k == j) continue;
                    int temp3 = digits[k];
                    int temp = temp1 + temp2 + temp3;

                    // last digit must be even
                    if(temp3 % 2 == 0){
                        st.insert(temp); // set ensures distinctness
                    }
                }
            }
        }
        return st.size(); // distinct count
    }
};
