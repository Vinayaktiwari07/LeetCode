class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size();

        stack<int> st;
        st.push(-1);   // base index
        int count = 0;

        for(int i=0; i<n; i++){
            if(s[i] == '('){
                st.push(i);
            } else {
                st.pop();  // try to match
                if(st.empty()){
                    st.push(i);   // reset base
                } else {
                    count = max(count, i - st.top());
                }
            }
        }
        return count;

        // stack<char> st;
        // int count = 0;
        // for(auto & x:s){
            
        //     if(x == '('){
        //         st.push(x);
        //     }
        //     else{
        //         if(x == ')'){
        //             st.pop();
        //             count++;
        //         }
        //     }
        // }

        // return count * 2;

        // ()(()) )) ()

        // vector<int> arr;
        // for(int i=0; i<n; i++){
        //     arr.push_back(s[i]);
        // }

        // int count = 0;
        // for(int i=0; i<n; i++){
        //     if(arr[i] == '(' ){
        //         count++;
        //     }
        //     else{
        //         count--;
        //     }
        // }

        // return n-count;

    }    
};