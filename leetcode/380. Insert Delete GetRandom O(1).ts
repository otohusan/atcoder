class RandomizedSet {
  private set: Set<number>;

  constructor() {
    this.set = new Set();
  }

  insert(val: number): boolean {
    if (this.set.has(val)) {
      return false;
    } else {
      this.set.add(val);
      return true;
    }
  }

  remove(val: number): boolean {
    if (this.set.has(val)) {
      this.set.delete(val);
      return true;
    } else {
      return false;
    }
  }

  getRandom(): number {
    const val = Math.floor(Math.random() * this.set.size);
    return Array.from(this.set)[val];
  }
}

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * var obj = new RandomizedSet()
 * var param_1 = obj.insert(val)
 * var param_2 = obj.remove(val)
 * var param_3 = obj.getRandom()
 */
