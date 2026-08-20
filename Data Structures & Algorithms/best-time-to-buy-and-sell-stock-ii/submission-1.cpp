class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int j=1;
    int profit = 0;
    int minm = prices[0], maxm = 0;
    while(j<prices.size()){
    while(j<prices.size() && prices[j]<= minm) {
        minm = prices[j];
        j++;
    }
    maxm = minm;
    while(j<prices.size() && prices[j]>maxm){
        maxm = prices[j];
        j++;
    }
    profit+=maxm - minm;
    minm = prices[j];
    }
   return profit;
    }
};