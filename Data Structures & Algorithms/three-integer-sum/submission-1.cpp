class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         vector<vector<int>> res;
         // sorting so that if resulted num is positive we have to decrease +ve number, 
        //  if result is -ve then we have to decrease the -ve number or even out
        sort(nums.begin(),nums.end());

        for(int i=0; i<nums.size(); i++){
            // if the previous value is same with current, 
            // it will create same result as previous which cause duplicate value to store in result.
            if(i>0 && nums[i] == nums[i-1]){
                continue;
            }

            int left = i+1;
            int right = nums.size() - 1;

            while(left < right ){
                int current_sum = nums[i] + nums[left] + nums[right];

                if(current_sum > 0){
                    right --;
                }else if(current_sum < 0){
                    left ++;
                }else{
                    res.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    // if privious number is same as current then it will create duplicate value,
                    // to privent that increase left by one again untill current value is different from privious.
                    while(nums[left] == nums[left - 1] && left<right){
                        left++;
                    }
                }
            }
        }
        return res;
    }
};
