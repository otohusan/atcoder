function isPalindrome(s: string): boolean {
  let left = 0;
  let right = s.length - 1;

  while (left < right) {
    // 左側のポインタがアルファベットまたは数字になるまで進める
    while (left < right && !isAlphaNumeric(s[left])) {
      left++;
    }
    // 右側のポインタがアルファベットまたは数字になるまで戻す
    while (left < right && !isAlphaNumeric(s[right])) {
      right--;
    }

    // 大文字小文字を無視して比較
    if (s[left].toLowerCase() !== s[right].toLowerCase()) {
      return false;
    }

    left++;
    right--;
  }

  return true;
}

// 1文字がアルファベットまたは数字かどうかを判定するヘルパー関数
function isAlphaNumeric(ch: string): boolean {
  return /^[a-z0-9]$/i.test(ch);
}
