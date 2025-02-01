function maxProfit(prices: number[]): number {
  let ans = 0;

  for (let i = 0; i < prices.length; i++) {
    for (let j = i + 1; j < prices.length; j++) {
      ans = Math.max(ans, prices[j] - prices[i]);
    }
  }

  return ans;
}
