function longestCommonPrefix(strs: string[]): string {
  if (strs.length === 0) return "";
  if (strs.length === 1) return strs[0];

  let prefix = "";
  // 第一要素の各文字について調べる
  for (let i = 0; i < strs[0].length; i++) {
    const char = strs[0][i];
    // 他の文字列と比較
    for (let j = 1; j < strs.length; j++) {
      // 文字列の終端に達している、または文字が一致しない場合は終了
      if (i === strs[j].length || strs[j][i] !== char) {
        return prefix;
      }
    }
    // 全ての文字列で一致していれば、接頭辞に追加
    prefix += char;
  }

  return prefix;
}
