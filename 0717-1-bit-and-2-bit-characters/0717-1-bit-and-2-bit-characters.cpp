class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size();

        bool flag = true;
        for(int i=0; i<n;){
            if(bits[i] == 1){
                flag = false;
                i = i+2;
            }
            else{
                flag = true;
                i = i+1;
            }
        }

        if(flag == true){
            return true;
        }
        else{
            return false;
        }
    }
};