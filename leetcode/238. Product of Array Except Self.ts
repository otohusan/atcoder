function productExceptSelf(nums: number[]): number[] {
  let zero_count = 0;
  let sum = 1;

  for (let index = 0; index < nums.length; index++) {
    if (nums[index] === 0) {
      zero_count++;
      continue;
    }

    sum *= nums[index];
  }

  if (zero_count >= 2) {
    return Array(nums.length).fill(0);
  }

  const ans: number[] = Array(nums.length).fill(sum);

  for (let index = 0; index < nums.length; index++) {
    if (nums[index] === 0) continue;
    if (zero_count > 0) ans[index] = 0;
    ans[index] = ans[index] / nums[index];
  }

  return ans;
}
