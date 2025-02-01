function canJump(nums: number[]): boolean {
  const ans: boolean[] = Array(nums.length).fill(false);
  ans[0] = true;

  for (let index = 0; index < nums.length; index++) {
    if (ans[index] === true) {
      for (let j = 1; j <= nums[index]; j++) {
        if (nums.length < index + j) {
          break;
        }

        ans[index + j] = true;
      }
    }
  }

  return ans[ans.length - 1];
}
