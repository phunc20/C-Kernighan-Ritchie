#define TRUE 1
#define FALSE 0

void squeeze(char s1[], char s2[]) {
  // i,j for running thru the indices of s1, m for s2.
  int i,j,m;
  int found;
  for (i=j=0; s1[i]!='\0'; ++i) {
    //found = FALSE;
    //for (m=0; s2[m]!='\0'; ++m) {
    for (m=0, found = FALSE; s2[m]!='\0'; ++m) {
      if (s1[i] == s2[m]) {
        found = TRUE;
        break;
      }
    }
    if (found) {
      ;
    }
    else {
      s1[j++] = s1[i];
    }
  }
  s1[j] = '\0';
}
