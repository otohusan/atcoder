function majorityElement(nums: number[]): number {
  const map = new Map<number, number>();
  const majorityCount = Math.floor(nums.length / 2);

  for (let num of nums) {
    map.set(num, (map.get(num) ?? 0) + 1);

    if (map.get(num)! > majorityCount) {
      return num;
    }
  }

  return -1; // ここには到達しない（問題の条件より、必ず存在する）
}
