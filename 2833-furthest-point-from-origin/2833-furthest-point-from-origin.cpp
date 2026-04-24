class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n = moves.size();

        int Lcount = 0;
        int Rcount = 0;
        for(int i=0; i<n; i++){
            if(moves[i] == 'L'){
                Lcount++;
            }
            if(moves[i] == 'R'){
                Rcount++;
            }
        }

        char replace = 'R';
        if(Lcount > Rcount){
            replace = 'L';
        }

        for(int i=0; i<n; i++){
            if(moves[i] == '_'){
                moves[i] = replace;
            }
        }

        int l = 0;
        int r = 0;
        for(int i=0; i<n; i++){
            if(moves[i] == 'R'){
                r++;
            }else{
                l++;
            }
        }

        return abs(r-l);
    }
};