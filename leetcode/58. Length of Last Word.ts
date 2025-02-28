function lengthOfLastWord(s: string): number {
  let ans = 0;

  for (let index = 0; index < s.length; index++) {
    if (s[s.length - index - 1] !== " ") {
      ans++;
    }

    if (s[s.length - index - 1] === " " && ans > 0) {
      return ans;
    }
  }

  return ans;
}

function lengthOfLastWord2(s: string): number {
  const words = s.trim().split(" ");
  return words[words.length - 1].length;
}
