class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        bool flag = true;

        for(auto& x : s){
            if(x == '(' || x == '{' || x == '['){
                st.push(x);
            }
            else{
                if(st.empty()){
                    flag = false;
                    break;
                }
                // st.pop();
                char top = st.top();
                if(top == '(' ){
                    if(x == ')' ){
                        st.pop();
                    }
                    else{
                        flag = false;
                        break;
                    }
                }
                if(top == '{' ){
                    if(x == '}' ){
                        st.pop();
                    }
                    else{
                        flag = false;
                        break;
                    }
                }
                if(top == '[' ){
                    if(x == ']' ){
                        st.pop();
                    }
                    else{
                        flag = false;
                        break;
                    }
                }
            }
        }

        if(flag == true && st.empty()){
            return true;
        }
        else{
            return false;
        }
    }
};