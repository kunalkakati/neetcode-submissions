class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> bucket;
       for(int i=0; i<nums.size(); i++){
            int otherNum = target - nums[i];
            if(bucket.find(otherNum) != bucket.end()){
                return{bucket[otherNum],i};
            }
            bucket.insert({nums[i],i});
       }
       return {};
    }
};
