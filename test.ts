function removeDuplicates(nums: number[]): number {
  if (nums.length === 0) {
    return 0;
  }

  let k = 1;
  let count = 0;

  for (let index = 1; index < nums.length; index++) {
    if (nums[index - 1] === nums[index]) {
      count++;
    } else {
      count = 0;
    }

    if (count >= 2) {
      continue;
    }

    nums[k] = nums[index];
    k++;
  }

  return k;
}
