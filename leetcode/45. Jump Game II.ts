function jump(nums: number[]): number {
  const ans: number[] = Array(nums.length).fill(Infinity);
  ans[0] = 0;

  for (let index = 0; index < nums.length; index++) {
    if (ans[index] === Infinity) continue;

    for (let j = 1; j <= nums[index]; j++) {
      ans[index + j] = Math.min(ans[index] + 1, ans[index + j]);
    }
  }

  return ans[nums.length - 1];
}
