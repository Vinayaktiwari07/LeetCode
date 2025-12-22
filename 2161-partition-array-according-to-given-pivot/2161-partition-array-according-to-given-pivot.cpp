class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> greater;
        vector<int> smaller;
        vector<int> equaller;

        for(int i=0; i<n; i++){
            if(nums[i]>pivot){
                greater.push_back(nums[i]);
            }
            else if(nums[i]<pivot){
                smaller.push_back(nums[i]);
            }
            else if(nums[i]==pivot){
                equaller.push_back(nums[i]);
            }
        }
        vector<int> arr;
        // for(int i=0; i<smaller.size(); i++){
        //     arr.push_back(smaller[i]);
        // }
        // for(int i=smaller.size(); i<smaller.size()+equaller.size(); i++){
        //     arr.push_back(equaller[i]);
        // }
        // for(int i=smaller.size()+equaller.size(); i<smaller.size()+equaller.size()+greater.size(); i++){
        //     arr.push_back(greater[i]);
        // }
        arr.insert(arr.end(), smaller.begin(), smaller.end());
        arr.insert(arr.end(), equaller.begin(), equaller.end());
        arr.insert(arr.end(), greater.begin(), greater.end());


        return arr;

        // return smaller;
        // return equaller;
        // return greater;
    }
};