function removeDuplicates(nums: number[]): number {
  const newNums = Array.from(new Set(nums));

  for (let index = 0; index < newNums.length; index++) {
    nums[index] = newNums[index];
  }

  return newNums.length;
}
