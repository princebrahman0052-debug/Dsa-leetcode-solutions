class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int ans = 0;

        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] < mini) {  // minimum dekhta h ki isse bhi koi minimum h
                mini = prices[i];
            }
                int profit = prices[i] - mini; // hr brr profit nikalta h cond. true ho ya nhi
                if(profit > ans) {
                    ans = profit;
                }
        }

        return ans;
    }
};