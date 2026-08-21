class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // N square time complaxity
        // int res = 0;
        // int profit = 0;
        // for(int i=0; i<prices.size(); i++){
        //     for(int j = i+1; j<prices.size(); j++){
        //         profit = prices[j] - prices[i];
        //         if(profit > res){
        //             res = profit;
        //         }
        //     }
        // }
        // return res;
        int left=0, right=1;
        int maxProfit = 0;
        while(right < prices.size()){
            if(prices[left] < prices[right]){
                int profit = prices[right] - prices[left];
                maxProfit = max(maxProfit, profit);
            }else{
                left = right;
            }
            right++;
        }
        return maxProfit;
    }
};
