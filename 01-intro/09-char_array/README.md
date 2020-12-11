## `02_print_longest.c`
```bash
[phunc20@homography-x220t 09-char_array]$ gcc 02_print_longest.c
[phunc20@homography-x220t 09-char_array]$ cat 02_print_longest.c | ./a.out
  // Also note that if MAXLEN equals 5 and current line equals "abcd\n" then s would be constructed as "abcd\0".
[phunc20@homography-x220t 09-char_array]$
```

## `exo-01-17.c`
```bash
[phunc20@homography-x220t 09-char_array]$ gcc exo-01-17.c
[phunc20@homography-x220t 09-char_array]$ cat exo-01-17.c | ./a.out
len = 138: int getligne(char line[], int maxlen);  // Rmk. There seems to already be a function named `getline` in stdio.h, so we renamed `getligne`
len =  90:   // In case we exit the for loop because c == '\n', we need to include that char as well
len =  86:   // (R1) No. If c == '\n', we would have exited the for loop without incrementing i.
len = 113:   // Also note that if MAXLEN equals 5 and current line equals "abcd\n" then s would be constructed as "abcd\0".
len = 107:   // That is, any line with lenght >= MAXLEN, will be truncated there with its last char replaced by '\0'.
[phunc20@homography-x220t 09-char_array]$
```

## The effect of `\0`
```bash
[phunc20@homography-x220t 09-char_array]$ gcc 04_extraneous.c
[phunc20@homography-x220t 09-char_array]$ cat 04_extraneous.c
#include <stdio.h>

int main() {
  char str[7];
  str[0] = 'a';
  str[1] = 'b';
  str[2] = 'c';
  str[3] = '\n';
  str[4] = '\0';
  printf("str = %s", str);
  return 0;
}

[phunc20@homography-x220t 09-char_array]$ ./a.out
str = abc
[phunc20@homography-x220t 09-char_array]$ gcc 05_extraneous2.c
[phunc20@homography-x220t 09-char_array]$ cat 05_extraneous2.c
#include <stdio.h>

int main() {
  char str[7];
  str[0] = 'a';
  str[1] = 'b';
  str[2] = 'c';
  str[3] = '\0';
  printf("str = %s", str);
  return 0;
}

[phunc20@homography-x220t 09-char_array]$ ./a.out
str = abc[phunc20@homography-x220t 09-char_array]$
```


## Initialization
It seems that by default, character array's element are initialized to `\0`. That's probably why
```bash
[phunc20@homography-x220t 09-char_array]$ gcc 06_noNull.c
[phunc20@homography-x220t 09-char_array]$ cat 06_noNull.c
#include <stdio.h>

int main() {
  char str[4];
  str[0] = 'a';
  str[1] = 'b';
  str[2] = 'c';
  printf("str = %s", str);
  return 0;
}

[phunc20@homography-x220t 09-char_array]$ ./a.out
str = abc[phunc20@homography-x220t 09-char_array]$ cp 06_noNull.c
01_python_int.c         03_exceed.c             05_extraneous2.c        07_extraneous_noNull.c  exo-01-17.c             README.md
02_print_longest.c      04_extraneous.c         06_noNull.c             a.out                   exo-01-18.c
[phunc20@homography-x220t 09-char_array]$ cp 06_noNull.c 08_non_initiated.c
[phunc20@homography-x220t 09-char_array]$ vim 08_non_initiated.c
[phunc20@homography-x220t 09-char_array]$ gcc 08_non_initiated.c
[phunc20@homography-x220t 09-char_array]$ ./a.out
str = [phunc20@homography-x220t 09-char_array]$ vim README.md
[phunc20@homography-x220t 09-char_array]$ cat 08_non_initiated.c
#include <stdio.h>

int main() {
  char str[4];
  printf("str = %s", str);
  return 0;
}
```

## about `printf`'s arg
If `s` is a character array, you can actually do `printf(s);` without problem.
```bash
[phunc20@homography-x220t 09-char_array]$ gcc 08_print.c
[phunc20@homography-x220t 09-char_array]$ ./a.out
ab[phunc20@homography-x220t 09-char_array]$ cat 08_print.c
#include <stdio.h>

int main() {
  char str[2];
  str[0] = 'a';
  str[1] = 'b';
  printf(str);
  return 0;
}
```



## `exo-01-18.c`
```bash
[phunc20@homography-x220t 09-char_array]$ cat trailing.txt | ./a.out | sed 's/$/\$/g'
# Bắt Đầu từ Cuối Năm 2019$
Tôi từ chỉ sử dụng duy nhất một Linux distro là Ubuntu sang Arch Linux (do vô tình nhìn thấy [một bạn thủ vị tên Luke Smith](https://www.youtube.com/channel/UC2eYFnH61tmytImy1mTYvhA) trên youtube). Vài tháng kế từ thời điểm đó, là khoản thời gian Linux của mình tiến bộ nhanh nhất trong suất mấy năm qua.$
Repo này nằm mục đích$
01. giúp cho bản thân mình kiểm lại những files quan trọng mình đã bỏ thời gian tạo ra$
02. chia sẻ với cộng dồng sử dụng Linux, giúp cho việc sử dụng Linux đơn giản và thoải mãi hơn$
03. không những Arch Linux, mà còn những distros khác mà mình từng tiếp xúc hoặc đang tiếp xúc, mình đều sẽ chia sẻ ở đây (Vì ý tưởng chia sẻ này đến sau việc mình ghi note, nên mới đầu chưa kịp push lên hết tất cả note của mình lên)$
Nếu cách đây 1 hoặc 2 năm nếu mà mình gặp được người giống như mình bây giờ để chỉ cho mình (hoặc là gặp được bạn như Luke Smith), thì mình sẽ rất vui vì được tiến bộ nhanh chóng hơn và appreciate Linux toàn diện hơn. Hy vọng trong số người đọc/sử dụng repo này cũng sẽ có người cảm thấy niệm vui đó.$
## My feelings towards those few distros I come to use$
My point of view or my feelings below are somewhat biased by the fact that$
01. I was a former math major converted to <b>scientific programming / data science / machine learning</b>$
02. I have been using <code><b>python</b></code> as the main programming language for 3 years$
So here is how I feel about each distribution$
- <b>arch linux</b>$
- <b>blackarch linux</b>: can take long to install, due to a default installation of too many packages. One could have chosen to install less, but that'd be meaningless to have chosen <b>blackacrh linux</b> over <b>arch linux</b> or <b>artix</b> in the first place.$
- <b>artix</b>$
- <b>manjaro</b>$
- <b>parabola</b>$
- <b>gentoo</b>$
- <b>ubuntu</b>$
- <b>trisquel</b>$
- <b>openBSD</b>$
## My feelings towards various thinkpads I come to use$
- <b>x220</b>$
- <b>x200</b>$
    - Cannot `pip install tensorflow` with versions higher than **`1.5`** or sth like that. (Probably because the binaries for this kind of machine structure is not built.)$
    - Two workarounds for the above issue: i) build tf from source; ii) use `miniconda` (they seem to have built the binary)$
- <b>x60</b>$
    - Forget about using tensorflow. PyTorch seems to be installable. (In any case, machines this old would probably take long to run these frameworks.)$
[phunc20@homography-x220t 09-char_array]$ cat trailing.txt | sed 's/$/\$/g'
# Bắt Đầu từ Cuối Năm 2019                                      $
Tôi từ chỉ sử dụng duy nhất một Linux distro là Ubuntu sang Arch Linux (do vô tình nhìn thấy [một bạn thủ vị tên Luke Smith](https://www.youtube.com/channel/UC2eYFnH61tmytImy1mTYvhA) trên youtube). Vài tháng kế từ thời điểm đó, là khoản thời gian Linux của mình tiến bộ nhanh nhất trong suất mấy năm qua.                                              $
$
Repo này nằm mục đích                                                $
01. giúp cho bản thân mình kiểm lại những files quan trọng mình đã bỏ thời gian tạo ra                                               $
02. chia sẻ với cộng dồng sử dụng Linux, giúp cho việc sử dụng Linux đơn giản và thoải mãi hơn                                               $
03. không những Arch Linux, mà còn những distros khác mà mình từng tiếp xúc hoặc đang tiếp xúc, mình đều sẽ chia sẻ ở đây (Vì ý tưởng chia sẻ này đến sau việc mình ghi note, nên mới đầu chưa kịp push lên hết tất cả note của mình lên)                                                $
                                                     $
Nếu cách đây 1 hoặc 2 năm nếu mà mình gặp được người giống như mình bây giờ để chỉ cho mình (hoặc là gặp được bạn như Luke Smith), thì mình sẽ rất vui vì được tiến bộ nhanh chóng hơn và appreciate Linux toàn diện hơn. Hy vọng trong số người đọc/sử dụng repo này cũng sẽ có người cảm thấy niệm vui đó.                                                $
$
## My feelings towards those few distros I come to use                     $
My point of view or my feelings below are somewhat biased by the fact that       $
01. I was a former math major converted to <b>scientific programming / data science / machine learning</b>                                                  $
02. I have been using <code><b>python</b></code> as the main programming language for 3 years                        $
                                                        $
So here is how I feel about each distribution          $
- <b>arch linux</b>             $
- <b>blackarch linux</b>: can take long to install, due to a default installation of too many packages. One could have chosen to install less, but that'd be meaningless to have chosen <b>blackacrh linux</b> over <b>arch linux</b> or <b>artix</b> in the first place.                           $
- <b>artix</b>                  $
- <b>manjaro</b>                                                     $
- <b>parabola</b>                                                    $
- <b>gentoo</b>                                              $
- <b>ubuntu</b>                                              $
- <b>trisquel</b>                                                    $
- <b>openBSD</b>                                                     $
$
## My feelings towards various thinkpads I come to use$
- <b>x220</b>$
- <b>x200</b>$
    - Cannot `pip install tensorflow` with versions higher than **`1.5`** or sth like that. (Probably because the binaries for this kind of machine structure is not built.)$
    - Two workarounds for the above issue: i) build tf from source; ii) use `miniconda` (they seem to have built the binary)$
- <b>x60</b>$
    - Forget about using tensorflow. PyTorch seems to be installable. (In any case, machines this old would probably take long to run these frameworks.)$
[phunc20@homography-x220t 09-char_array]$
```

## `exo-01-19.c`
```bash
[phunc20@homography-x220t 09-char_array]$ gcc exo-01-19.c
[phunc20@homography-x220t 09-char_array]$ cat exo-01-19.c | ./a.out
>h.oidts< edulcni#
0001 NELXAM enifed#

:noitpircseD */
.s gnirts rahc eht sesrever taht )s(esrever noitcnuf a etirW *
.emit a ta enil a tupni sti sesrever taht margorp a etirw ot ti esU *
/*

;)nelxam tni ,][enil rahc(engilteg tni
;)][s rahc(htgnel tni
ecalp ni s esrever //  ;)][s rahc(esrever diov

{ )(niam tni
;nel tni
enil tupni tnerruc //      ;]NELXAM[enil rahc

{ )0 > ))NELXAM ,enil(engilteg = nel(( elihw
;)enil(esrever
;xedni_trats tni
)'n\' == ]0[enil( fi
;1 = xedni_trats
esle
;0 = xedni_trats
;j tni
)j++ ;nel < j ;xedni_trats=j( rof
;)]j[enil(rahctup
)1 == xedni_trats( fi
;)'n\'(rahctup
}
;0 nruter
}

{ )nelxam tni ,][s rahc(engilteg tni
;c ,i tni
)i++ ;'n\' =! c && FOE =! ))(rahcteg=c( && 1-nelxam < i ;0=i( rof
;c = ]i[s
{ )'n\' == c( fi
;'n\' = ]i[s
;i++
}
."0\dcba" sa detcurtsnoc eb dluow s neht "n\dcba" slauqe enil tnerruc dna 5 slauqe NELXAM fi taht eton oslA //
.'0\' yb decalper rahc tsal sti htiw ereht detacnurt eb lliw ,NELXAM => thgnel htiw enil yna ,si tahT //
;'0\' = ]i[s
;i nruter
}

{ )][s rahc(htgnel tni
;i tni
)i++ ;'0\' =! ]i[s ;0 = i( rof
;
;i nruter
}

{ )][s rahc(esrever diov
;k tni
;)s(htgnel = nel tni
;pmt rahc
tnemele ht-)k - nel( dna ht-j eht paws ew emit hcaE //
{ )k-- ;2 / nel => k ;1 - nel = k( rof
;]k[s = pmt
;]k - 1 - nel[s = ]k[s
;pmt = ]k - 1 - nel[s
}
}
[phunc20@homography-x220t 09-char_array]$ cat exo-01-19.c | ./a.out | sed 's/$/$/g'
>h.oidts< edulcni#$
0001 NELXAM enifed#$
$
:noitpircseD */$
.s gnirts rahc eht sesrever taht )s(esrever noitcnuf a etirW * $
.emit a ta enil a tupni sti sesrever taht margorp a etirw ot ti esU * $
/* $
$
;)nelxam tni ,][enil rahc(engilteg tni$
;)][s rahc(htgnel tni$
ecalp ni s esrever //  ;)][s rahc(esrever diov$
$
{ )(niam tni$
;nel tni  $
enil tupni tnerruc //      ;]NELXAM[enil rahc  $
$
{ )0 > ))NELXAM ,enil(engilteg = nel(( elihw  $
;)enil(esrever    $
;xedni_trats tni    $
)'n\' == ]0[enil( fi    $
;1 = xedni_trats      $
esle    $
;0 = xedni_trats      $
;j tni    $
)j++ ;nel < j ;xedni_trats=j( rof    $
;)]j[enil(rahctup      $
)1 == xedni_trats( fi    $
;)'n\'(rahctup      $
}  $
;0 nruter  $
}$
$
{ )nelxam tni ,][s rahc(engilteg tni$
;c ,i tni  $
)i++ ;'n\' =! c && FOE =! ))(rahcteg=c( && 1-nelxam < i ;0=i( rof  $
;c = ]i[s    $
{ )'n\' == c( fi  $
;'n\' = ]i[s    $
;i++    $
}  $
."0\dcba" sa detcurtsnoc eb dluow s neht "n\dcba" slauqe enil tnerruc dna 5 slauqe NELXAM fi taht eton oslA //  $
.'0\' yb decalper rahc tsal sti htiw ereht detacnurt eb lliw ,NELXAM => thgnel htiw enil yna ,si tahT //  $
;'0\' = ]i[s  $
;i nruter  $
}$
$
{ )][s rahc(htgnel tni$
;i tni  $
)i++ ;'0\' =! ]i[s ;0 = i( rof  $
;    $
;i nruter  $
}$
$
{ )][s rahc(esrever diov$
;k tni  $
;)s(htgnel = nel tni  $
;pmt rahc  $
tnemele ht-)k - nel( dna ht-j eht paws ew emit hcaE //  $
{ )k-- ;2 / nel => k ;1 - nel = k( rof  $
;]k[s = pmt    $
;]k - 1 - nel[s = ]k[s    $
;pmt = ]k - 1 - nel[s    $
}  $
}$
[phunc20@homography-x220t 09-char_array]$
```

## Not specifying the length
```bash
[phunc20@homography-x220t 09-char_array]$ gcc 12_char_not_length.c
[phunc20@homography-x220t 09-char_array]$ ./a.out
^warning: $
msg[9] = \0
strlen(msg) = 9
[phunc20@homography-x220t 09-char_array]$ cat 12_char_not_length.c
#include <stdio.h>
#include <string.h>

int main() {
  char msg[] = "warning: ";
  int i = 0;
  putchar('^');
  while (msg[i] != '\0') {
    putchar(msg[i]);
    i += 1;
  }
  putchar('$');
  printf("\nmsg[%d] = \\0\n", i);
  printf("strlen(msg) = %d\n", strlen(msg));
  return 0;
}
[phunc20@homography-x220t 09-char_array]$
```


