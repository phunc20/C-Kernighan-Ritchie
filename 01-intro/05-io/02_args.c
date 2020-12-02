#include <stdio.h>

int main() {
  // N.B. printf's arg should be a string, and not a char; the reverse for putchar.
  //printf('\n');  // This will cause segmentation fault
  putchar("A");  // This will print nothing
}


