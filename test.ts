function removeDuplicates(nums: number[]): number {
  const map = new Map<number, number>();
  let k = 0;

  for (let index = 0; index < nums.length; index++) {
    const count = map.get(nums[index]) ?? 0; // 既存のカウントを取得（未登録なら0）

    if (count < 2) {
      // 2回まで許容
      nums[k] = nums[index]; // 先頭に詰める
      k++;
    }

    map.set(nums[index], count + 1); // カウントを更新
  }

  return k;
}
