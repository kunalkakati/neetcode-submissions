class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        for(int i=0; i<nums.size(); i++){
            for(int k=i+1; k<nums.size(); k++){
                if(nums[i] + nums[k] == target){
                    res.push_back(i);
                    res.push_back(k);
                    break;
                }
            }
        }
        return res;
    }
};
