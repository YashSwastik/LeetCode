int maxProfit(int* prices, int pricesSize) {
    int profit =0;
    int minprice = prices[0];
    for(int i=1;i<pricesSize; i++ ){
        if(prices[i]<minprice)
            minprice = prices[i];
        if(prices[i]-minprice> profit)
            profit = prices[i]-minprice;
    }
    return profit;
}