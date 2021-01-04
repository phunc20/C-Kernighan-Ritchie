## `clock()`
`clock()` is a function in `time.h` which stores _the number of **clock ticks**_ since the execution of the program. To convert clock ticks to seconds, one divides the number of clock ticks by `CLOCKS_PER_SEC`, a macro in `time.h`.

```bash
~/.../03-else_if/exo-03-01/measure-time ❯❯❯ gcc clock.c
~/.../03-else_if/exo-03-01/measure-time ❯❯❯ ./a.out
CPU time consumed = 0.000031 (sec)
~/.../03-else_if/exo-03-01/measure-time ❯❯❯ ./a.out
CPU time consumed = 0.000027 (sec)
~/.../03-else_if/exo-03-01/measure-time ❯❯❯ time ./a.out
CPU time consumed = 0.000037 (sec)

real    0m3.002s
user    0m0.002s
sys     0m0.000s
~/.../03-else_if/exo-03-01/measure-time ❯❯❯ time ./a.out
CPU time consumed = 0.000023 (sec)

real    0m3.002s
user    0m0.002s
sys     0m0.000s
```

**(?)** Why the number `0.000023 (sec)`?<br>
As far as I can understand, the **CPU time** here means the time the computer runs a process of the program `clock.c`. That is, when the code touches `sleep(3)`, the computer yields control to other processes needing its CPU, thus not counting in the `3 sec` sleep into CPU time.


## `time(NULL)`
The return value of `time(NULL)` is _**the number of seconds** elapsed since the Epoch (i.e. `00:00:00 UTC, January 1, 1970`)_. Note that this means that the returned value is **not** a `double` or `float`, but an `int`.
