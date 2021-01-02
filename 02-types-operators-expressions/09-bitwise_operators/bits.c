/* getbits: get n bits from position p
 * where p starts from the right-most position with value 0
 */
unsigned getbits(unsigned x, int p, int n) {
  // p+1-n instead of p-n becasue p starts from 0 not from 1.
  // The right operand is a mask of all 0's except 1's at the rigth-most n bits, e.g. (0..0111) for n = 3.
  // To fabricate such a mask, we first make its converse: (1..1000) and then apply one's complement.
  return (x >> (p+1-n)) & ~(~0 << n);
}
