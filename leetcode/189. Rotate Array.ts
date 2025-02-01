/**
 Do not return anything, modify nums in-place instead.
 */
function rotate(nums: number[], k: number): void {
  const original = Array.from(nums);

  for (let index = 0; index < nums.length; index++) {
    nums[(index + k) % nums.length] = original[index];
  }
}
