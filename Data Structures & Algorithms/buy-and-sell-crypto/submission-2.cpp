class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // vector<int>minim;
        int min_=prices[0];
        int max_profit=0;
        int profit=0;
        for(int i=0;i<prices.size();i++){
            profit = prices[i]-min_;
            if(prices[i]<min_){
                min_=prices[i];
            }
            if(profit>max_profit){
                max_profit=profit;
            }
        }
        // int max_profit=0;
        // int profit=0;
        // for(int i=0;i<prices.size();i++){
        //     profit=prices[i]-minim[i];
        //     if(profit>max_profit){
        //         max_profit=profit;
        //     }
        // }
        return max_profit;
    }
};
