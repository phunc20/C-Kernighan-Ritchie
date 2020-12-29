/* strcat: concatenate t to end of s; s must be big enough */
void strcat(char s[], char t[]) {
  int i = 0;
  int j = 0;
  // We first find the index of '\0' in s
  while (s[i] != '\0')
    i++;
  while ((s[i++] = t[j++]) != '\0')
    ;
}
