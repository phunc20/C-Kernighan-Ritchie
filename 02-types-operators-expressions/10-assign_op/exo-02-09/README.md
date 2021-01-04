## Why `x &= (x-1)` deletes the rightmost 1-bit in `x`?
Agreeing the convention that the rightmost bit is indexed as `0`, the second rightmost `1`, etc.,<br>
assume `p >= 0` is the rightmost 1-bit of `x`.
- `(x-1)`, expressed as a binary, will have exactly the same bits as `x` in the position `p+1, p+2, ...` (infinitely onward). When we do the binary AND `x &= (x-1)`, the `p+1, p+2, ...` bits will remain unchanged.
- the position `p` of `(x-1)` will be `0`, so as the position `p` of `x &= (x-1)`.
- since `p` is the rightmost 1-bit, all positions `< p` are originally zeros in `x`, which means that `x &= (x-1)` will also have all zeros in `p-1, p-2, ...`, if there are such `p-1, p-2, ...` (i.e. if `p > 0`).

So we see the reason why `x &= (x-1)` removes the rightmost 1-bit in `x`.


