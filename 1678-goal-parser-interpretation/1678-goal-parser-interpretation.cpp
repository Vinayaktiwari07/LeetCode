class Solution {
public:
    string interpret(string command) {
        int n = command.size();

        string s = "";
        for(int i=0; i<n;){
            if(i+1 < n && command[i] == '(' && command[i+1] == ')'){
                s.push_back('o');
                i += 2;
            }
            else if(i+3 < n && command[i] == '(' && command[i+1] == 'a'){
                s += "al";
                i = i+4;
            }
            else{
                s.push_back(command[i]);
                i++;
            }
        }

        return s;
    }
};