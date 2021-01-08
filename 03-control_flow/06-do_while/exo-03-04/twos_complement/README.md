## `int`
On a machine which uses 32-bit `int`, we have already seen that `1<<31 == INT_MIN` equals `-2**31 (python)`. In bit expression, that's `(10...0)_2`, that is,
`31` trailing zeros plus a leading `1`, a total of `32` bits. This in signed integer domain will represent the most negative integer. As we continue add `1` to
`1<<31`, we expect it to successively become `(10...01)_2 = -2**31 + 1`, `(10...010)_2 = -2**31 + 2`, ..., `(11...1)_2 = -1`. Indeed,  `aa_all1bits.c` coincides
this expectation:

```bash
~/.../06-do_while/exo-03-04/twos_complement ❯❯❯ gcc aa_all1bits.c
~/.../06-do_while/exo-03-04/twos_complement ❯❯❯ ./a.out
allones = -1(%d)
allones = ffffffff(%x)

shifted = allones << 1;
shifted = -2(%d)
shifted = fffffffe(%x)

shifted <<= 1;
shifted = -4(%d)
shifted = fffffffc(%x)

shifted = allones >> 1;
shifted = -1(%d)
shifted = ffffffff(%x)

allones + 1 = 0(%d)
allones + 1 = 0(%x)
~/.../06-do_while/exo-03-04/twos_complement ❯❯❯
```
