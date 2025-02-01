function hIndex(citations: number[]): number {
  let ans = 0;

  for (let index = 1; index <= 1000; index++) {
    let count = 0;

    for (let j = 0; j < citations.length; j++) {
      if (citations[j] >= index) {
        count++;
      }
    }

    if (count >= index) ans = Math.max(index, ans);
  }

  return ans;
}
