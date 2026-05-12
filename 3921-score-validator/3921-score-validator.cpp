class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        int n = events.size();

        int score = 0;
        int counter = 0;
        int i=0;

        while(counter < 10 && i<n){
            if(events[i] == "0"){
                score += 0;
                i++;
            }else if(events[i] == "2"){
                score += 2;
                i++;
            }else if(events[i] == "3"){
                score += 3;
                i++;
            }else if(events[i] == "4"){
                score += 4;
                i++;
            }else if(events[i] == "5"){
                score += 5;
                i++;
            }else if(events[i] == "6"){
                score += 6;
                i++;
            }else if(events[i] == "W"){
                counter++;
                i++;
            }else{
                score++;
                i++;
            } 
        }

        vector<int> arr;
        arr.push_back(score);
        arr.push_back(counter);

        return arr;
    }
};