class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int tempProfit=0;
        int maxProfit=0;
        int buy=prices[0];

        for(auto &i:prices){
            tempProfit= i-buy;
            maxProfit=max(maxProfit,tempProfit);
            buy=min(buy,i);
        }
        return maxProfit;
    }
};