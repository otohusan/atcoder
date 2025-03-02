function reverseWords(s: string): string {
  let que: string[] = [];
  let ans = "";

  for (let index = s.length - 1; index >= 0; index--) {
    if (s[index] === " " && que.length > 0) {
      ans += out(que);
      ans += " ";
      que = [];
    }

    if (s[index] === " ") continue;

    que.push(s[index]);
  }

  ans += out(que);

  return ans.trim();
}

function out(s: string[]): string {
  let res = "";

  while (s.length > 0) {
    res += s.pop();
  }

  return res;
}
