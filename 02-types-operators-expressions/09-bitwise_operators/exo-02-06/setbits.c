int setbits(int x, int p, int n, int y) {
  /* 1st idea:
   */
  int head = (x >> (p+1)) << (p+1);
  int tail = x & ~(~0  << (p+1-n));
  //int torso = y & ~(~0  << n) << (p+1-n);
  int torso = (y & ~(~0  << n)) << (p+1-n);
  return head + tail + torso;

  /* 2nd idea:
   * First we make a mask, e.g. 1..11000011, with only the middle part being 0's.
   * This mask, called `mask`, will allow us to x & mask, i.e. remove the middle bits of x.
   * Once that done, left only to add back those bits in y.
   */
  //int mask = ~(~0 << n) << (p+1-n);

}
