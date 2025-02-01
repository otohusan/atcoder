function maxProfit2(prices: number[]): number {
  let ans = 0;

  for (let index = 1; index < prices.length; index++) {
    if (prices[index - 1] < prices[index]) {
      ans += prices[index] - prices[index - 1];
    }
  }

  return ans;
}
