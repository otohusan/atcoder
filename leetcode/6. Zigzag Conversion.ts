function convert(s: string, numRows: number): string {
  if (numRows === 1) return s;

  const rows: string[][] = Array.from({ length: numRows }, () => []);
  const cycle = 2 * numRows - 2; // 1周期の長さ

  for (let index = 0; index < s.length; index++) {
    let pos = index % cycle;
    // pos が numRows 以上なら、周期の後半部分は逆行する
    if (pos >= numRows) pos = cycle - pos;

    rows[pos].push(s[index]);
  }

  return rows.map((row) => row.join("")).join("");
}
