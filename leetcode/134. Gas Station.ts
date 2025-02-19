function canCompleteCircuit(gas: number[], cost: number[]): number {
  let totalTank = 0; // 全体のガス残量（ガソリンスタンド全体の差分の合計）
  let currTank = 0; // 現在の走行中のタンクのガス残量
  let startStation = 0; // 出発候補のガソリンスタンドのインデックス

  for (let i = 0; i < gas.length; i++) {
    const diff = gas[i] - cost[i];
    totalTank += diff;
    currTank += diff;

    // もし現在のタンクがマイナスになったら、出発地点を変更
    if (currTank < 0) {
      startStation = i + 1;
      currTank = 0;
    }
  }

  // 全体のガス量が不足していれば、一周は不可能
  return totalTank < 0 ? -1 : startStation;
}

// TODO: 振り返りたい
