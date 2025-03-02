function isSubsequence(s: string, t: string): boolean {
  let current_index = 0;

  for (let index = 0; index < t.length; index++) {
    if (t[index] === s[current_index]) current_index++;
  }

  return current_index === s.length;
}
