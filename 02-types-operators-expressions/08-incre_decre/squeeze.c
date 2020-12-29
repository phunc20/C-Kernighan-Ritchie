/* squeeze: delete all c from s */
void squeeze(char s[], int c) {
  // Note that we don't have to worry s being not big enough because
  // squeeze will always make s smaller.
  int i, j;
  for (i = j = 0; s[i] != '\0'; ++i) {
    if (s[i] == c)
      ;
    else
      s[j++] = s[i];
  }
  s[j] = '\0';
}
