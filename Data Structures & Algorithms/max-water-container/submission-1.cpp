class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res=0;
        // Two Pointer Method
        int l = 0;
        int r = heights.size() - 1;

        while(l<r){
            int width = r - l;
            int currentValue = min(heights[l], heights[r]) * width;
            res = max(res, currentValue);

            // Check if there is any heigher hight. 
            if(heights[l] <= heights[r]){
                l++;
            }else{
                r--;
            }
        }
        
        // Brute Force Method 
        // for(int i=0; i<heights.size(); i++){
        //     for(int k = i+1; k<heights.size(); k++){
        //         int width = k - i;
        
        //         int minVal = min(heights[i], heights[k]);
        //         int currentVal = minVal * width;
                
        //         res = max(res,currentVal)
        //     }
        // }
        return res;
    }
};
