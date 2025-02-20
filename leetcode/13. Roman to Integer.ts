function romanToInt(s: string): number {
  // ローマ数字とその値のマッピング
  const values: { [key: string]: number } = {
    I: 1,
    V: 5,
    X: 10,
    L: 50,
    C: 100,
    D: 500,
    M: 1000,
  };

  let total = 0;

  // 文字列の先頭から順に処理
  for (let i = 0; i < s.length; i++) {
    const currVal = values[s[i]];

    // 次の文字があれば、その値と比較して減算か加算か判断
    if (i + 1 < s.length && currVal < values[s[i + 1]]) {
      total -= currVal;
    } else {
      total += currVal;
    }
  }

  return total;
}
