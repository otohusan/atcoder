function rotate(nums: number[], k: number): void {
  const n = nums.length;
  k = k % n; // kが配列の長さ以上なら意味がないので調整

  // 1. 配列全体を反転
  reverse(nums, 0, n - 1);
  // 2. 先頭k個を反転
  reverse(nums, 0, k - 1);
  // 3. 残りの部分を反転
  reverse(nums, k, n - 1);
}

function reverse(nums: number[], start: number, end: number): void {
  while (start < end) {
    [nums[start], nums[end]] = [nums[end], nums[start]]; // Swap
    start++;
    end--;
  }
}
