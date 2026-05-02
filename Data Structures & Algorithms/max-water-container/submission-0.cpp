class Solution {
public:
    int maxArea(vector<int>& heights) {
        int res=0;
        int minVal=0;
        int currentResVal=0;
        int width = 0;
        
        for(int i=0; i<heights.size(); i++){
            for(int k = i+1; k<heights.size(); k++){
                width = k - i;
                minVal = min(heights[i], heights[k]);
                currentResVal = minVal * width;
                // cout<<currentResVal<<endl;
                if(res < currentResVal){
                    res = currentResVal;
                }
            }
        }
        return res;
    }
};
