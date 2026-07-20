class Solution(object):
    def maxProfit(self, prices):
        n=len(prices)
        max_profit=0
        min_price=float("inf")
        for i in range(0,n):
            min_price=min(min_price,prices[i])
            max_profit=max(max_profit,prices[i]-min_price)
        return max_profit




        
        