function removeDuplicates(nums: number[]): number {
  if (nums.length === 0) return 0;

  let k = 1; // 最終的なユニークな要素の数をカウント

  for (let i = 1; i < nums.length; i++) {
    if (nums[i] !== nums[i - 1]) {
      nums[k] = nums[i]; // ユニークな値を前に詰める
      k++;
    }
  }

  return k;
}
