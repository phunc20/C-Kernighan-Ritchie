/* think of t as the return value: t is almost identical
 * to s, except that \n, \t, \\ are replced by symbols
 */
void escape(char s[], char t[]) {
  int i, j;
	// i and j are going to be indices of s and t, resp.
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

/* epacse() does the reverse of escape(), transforming
 * t back to the original s.
 */
void epacse(char s[], char t[]){
  int i, j;
	// i and j are going to be indices of s and t, resp.
  for (i=j=0; t[j]!='\0'; j++) {
		if (t[j] == '\\') {
			j++;
      switch (t[j]) {
        case 'n' :
          s[i++] = '\n';
          break;
        case 't':
          s[i++] = '\t';
          break;
				case '\\':
          s[i++] = '\\';
          break;
        //default:
        //  s[i++] = '\\';
        //  s[i++] = t[j];
        //  break;
      }
		}
		else {
			s[i++] = t[j];
		}
  }

  s[i] = '\0';
}
