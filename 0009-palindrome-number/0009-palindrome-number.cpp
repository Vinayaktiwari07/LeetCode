class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);

        int i = 0, j = str.size() - 1;

        while (i<j) {
            if(str[i] != str[j])
                return false;
            i++;
            j--;
        }

        return true;

        // int n = str.size();

        // vector<int> arr;
        // for(int i=0; i<n; i++){
        //     char x;
        //     cin >> x;
        //     arr.push_back(x);
        // }

        // bool flag = true;
        // for(int i=0, j=n; i<n, j>0;){
        //     if(arr[i] == arr[j]){
        //         i++;
        //         j--;
        //     }
        //     else{
        //         flag = false;
        //     }

        // }

        // if(flag == true){
        //     return true;
        // }
        // else{
        //     return false;
        // }

    }
};