class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // Time complesity is n^2 not good. to be honest very bad.
        // for(int i=0; i<nums.size(); i++){
        //     for(int k = i+1; k<nums.size(); k++){
        //         if(nums[i] == nums[k]){
        //             return true;
        //         }
        //     }
        // }
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
    }
};