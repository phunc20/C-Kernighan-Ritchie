#include <string.h>

void my_strcat(char s[], char t[]) {
  int j = 0;
  // We first find the index of '\0' in s
  int i = strlen(s);
  while ((s[i++] = t[j++]) != '\0')
    ;
}
