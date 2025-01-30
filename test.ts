function removeDuplicates(nums: number[]): number {
  const set = new Set();
  let k: number = 0;

  for (let index = 0; index < nums.length; index++) {
    if (!set.has(nums[index])) {
      nums[k] = nums[index];
      k++;
    }

    set.add(nums[index]);
  }

  nums.slice(0, k);

  return k;
}
