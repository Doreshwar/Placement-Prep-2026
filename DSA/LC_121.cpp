class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n =prices.size();
        int diff;
        int less=prices[0];
        int maxnum=0;
        for(int i=1;i<n;i++){
            if(prices[i]<less){
                less=prices[i];
                continue;
            }
            diff=prices[i]-less;
            maxnum=max(diff,maxnum);
        }
        return maxnum;
    }
};