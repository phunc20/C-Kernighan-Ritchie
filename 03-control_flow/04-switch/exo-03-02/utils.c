
void escape(char s[], char t[]) {
  int i, j;
  //len_s = sizeof(s) / sizeof(char);
  //len_t = sizeof(t) / sizeof(char);
  //char c;
  //for (c=s[i=0]; c!='\0'; ++i)
  j = 0;
  for (i=0; s[i]!='\0'; ++i) {
    switch (s[i]) {
      case '\n' :
        t[j++] = '\\';
        t[j++] = 'n';
        break;
      case '\t':
        t[j++] = '\\';
        t[j++] = 't';
        break;
      case '\\':
        t[j++] = '\\';
        t[j++] = '\\';
        break;
      default:
        t[j++] = s[i];
        break;
    }
  }
  t[j] = '\0';
}

void epacse(char s[], char t[]){
  int i, j;
  //len_s = sizeof(s) / sizeof(char);
  //len_t = sizeof(t) / sizeof(char);
  //char c;
  //for (c=s[i=0]; c!='\0'; ++i)
  j = 0;
  for (i=0; s[i]!='\0'; ++i) {
    switch (s[i]) {
      case '\n' :
        t[j++] = '\\';
        t[j++] = 'n';
        break;
      case '\t':
        t[j++] = '\\';
        t[j++] = 't';
        break;
      case '\\':
        t[j++] = '\\';
        t[j++] = '\\';
        break;
      default:
        t[j++] = s[i];
        break;
    }
  }
  t[j] = '\0';

}
