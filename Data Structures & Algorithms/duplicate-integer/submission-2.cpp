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

        // using sort:
        // time complexity is nlongn.
        // sort(nums.begin(), nums.end());
        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i] == nums[i+1]){
        //         return true;
        //     }
        // }

        // using Hash set
        // use log-n time complexity
        unordered_set<int> bucket;
        for(int i : nums){
            if(bucket.count(i)){
                return true;
            }
            bucket.insert(i);
        }
        return false;
    }
};