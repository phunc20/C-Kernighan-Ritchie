## How to include header files from parent directory
[https://stackoverflow.com/questions/15120330/include-parent-directorys-file](https://stackoverflow.com/questions/15120330/include-parent-directorys-file)
```bash
~/.../02-types-operators-expressions/09-bitwise_operators/exo-02-06 ❯❯❯ gcc test1.c setbits.c ../binary.c
~/.../02-types-operators-expressions/09-bitwise_operators/exo-02-06 ❯❯❯ ./a.out
SET x = (607)_8 = (110000111)_2
GET x = (607)_8 = (110000111)_2
SET y = (5017)_8 = (101000001111)_2
GET y = (5017)_8 = (101000001111)_2
setbits(391,6,4,2575) = (777)_8 = (111111111)_2
Expected result: (111111111)_2, i.e. (777)_8
~/.../02-types-operators-expressions/09-bitwise_operators/exo-02-06 ❯❯❯ grep include test1.c
#include <stdio.h>
#include "setbits.h"
#include "../binary.h"
~/.../02-types-operators-expressions/09-bitwise_operators/exo-02-06 ❯❯❯
```
