class Solution {
public:
    int countCollisions(string directions) {
        int n = directions.size();
        int left = 0, right = n - 1;

        while (left < n && directions[left] == 'L') {
            left++;
        }

        while (right >= 0 && directions[right] == 'R') {
            right--;
        }

        int count = 0;

        for (int i = left; i <= right; i++) {
            if (directions[i] != 'S') {
                count++;
            }
        }

        return count;

        // int n = directions.size();

        // int count = 0;
        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //         if(directions[i] == 'R' && directions[j] == 'L'){
        //             count = count + 2;
        //             i = i+2;    
        //             break;
        //         }
        //         else if((directions[i] == 'R' && directions[j] == 'S') || (directions[i] == 'S' && directions[j] == 'L')){
        //             count++;
        //         }
        //         else if(directions[i] == 'S' && directions[j] == 'L' && directions[j+1] == 'L'){
        //             count++;
        //         }
        //     }
        // }
        // return count;

        
    }
};