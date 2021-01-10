#include <string.h>

/* Note that there are two r's in the function name:
 * The 2nd r for "right"
 */
int strrindex(char s[], char t[]) {
  int i,j,k;
  int len_t = strlen(t);
  int len_s = strlen(s);
  for (i=len_s - len_t; i >= 0; i--) {
    for (j=i, k=0; t[k] != '\0' && s[j] == t[k]; j++, k++)
      ;
    if (t[k] == '\0')
      return i;
  }
  return -1;
}
