function longestCommonPrefix(strs: string[]): string {
  let ans: string = "";

  if (strs.length === 1) {
    return strs[0];
  }

  for (let i = 0; i < strs[0].length; i++) {
    let flag = true;
    let word = "";

    for (let j = 1; j < strs.length; j++) {
      word = strs[j][i];
      if (strs[j].length < i) {
        flag = false;
      }

      if (strs[j - 1][i] !== strs[j][i]) {
        flag = false;
      }
    }

    if (!flag) {
      break;
    }

    ans += word;
  }

  return ans;
}
