#include <stdio.h>

/* Description:
 * print a histogram of the frequencies of diff char from the input
 * 	
 *
 * cf. 03_char_cont.c and its executable
 * On my thinkpad x200, the printable char's range are from 33 (!) to 126 (~)
 *
 */

#define MAX 126
#define MIN 33

int main() {
  int i, c;
  int freq[MAX-MIN+1];
  for (c=MIN; c<=MAX; ++c)
    freq[c-MIN] = 0;

  // Statistics
  while ((c = getchar()) != EOF) {
    if (c >= MIN && c <= MAX)
      ++freq[c-MIN];
  }

  // Histogram
  for (c=MIN; c<=MAX; ++c) {
    putchar(c);
    putchar(' ');
    for (i=0; i<freq[c-MIN]; ++i)
      putchar('*');
    putchar('\n');
  }
}
