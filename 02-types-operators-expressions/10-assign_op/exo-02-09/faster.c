/* a faster implementation of bitcount using x &= (x-1) */
int bitcount(unsigned x) {
  int b;
  if (x == 0) {
    b = 0;
  }
  else {
    for (b=1; (x &= (x-1)) != 0; ++b) {
      // The logic being:
      // - At first, there exists at least one bit
      // - Every iteration we remove the rightmost 1
      // - If, after removing the rightmost 1, x != 0, then there must exist other 1('s).
      ;
    }
  }
  return b;
}
