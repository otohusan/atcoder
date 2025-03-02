function strStr(haystack: string, needle: string): number {
  if (needle === "") return 0;

  for (let index = 0; index <= haystack.length - needle.length; index++) {
    const a = haystack.slice(index, index + needle.length);
    if (a === needle) {
      return index;
    }
  }

  return -1;
}
