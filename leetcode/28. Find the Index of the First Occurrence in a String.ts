function strStr(haystack: string, needle: string): number {
  if (haystack === needle) return 0;

  let ans = -1;
  for (let index = 0; index < haystack.length; index++) {
    if (index + needle.length > haystack.length) {
      break;
    }

    const a = haystack.slice(index, index + needle.length);

    if (a === needle) {
      ans = index;
      break;
    }
  }

  return ans;
}
