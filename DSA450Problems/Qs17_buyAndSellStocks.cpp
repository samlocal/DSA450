#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minCost=INT_MAX;
        int profit=0;

        for(int i=1;i<prices.size();i++)
        {
            minCost=min(minCost,prices[i-1]);
            profit=max(profit,prices[i]-minCost);
        }
        return profit;
    }
};