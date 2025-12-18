class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();

        int max = *max_element(nums.begin(), nums.end());
        int min = *min_element(nums.begin(), nums.end());

        sort(nums.begin(), nums.end());

        // for(int i=min; i<=max; i++){
        //     for(int j=0; j<n; j++){
        //         if(i == num)
        //     }
        // }
        vector<int> arr;
        int i=min, j=0;
        while(max>=min){
            if(i == nums[j]){
                i++;
                j++;
                max--;
            }
            else{
                arr.push_back(i);
                i++;
                max--;
                
            }
        } 
        return arr;
    }
};