#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* reverse: reverse string s in place */
void reverse(char s[]) {
	int c,i,j;

	for (i=0, j=strlen(s)-1; i<j; i++, j--) {
		c = s[i], s[i] = s[j], s[j] = c;
	}
}

/* itoa: convert n to characters in s */
void itoa(int n, char s[]) {
	int i, negative;
	negative = (n < 0);
	if (negative)
		n = -n;

	i = 0;
	do {
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);

	if (negative)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

void itoa_fixed1(int n, char s[]) {
	int i, is_negative;
  long positive;
	is_negative = (n < 0);
	if (is_negative)
		positive = -(long)n;

	i = 0;
	do {
		s[i++] = positive % 10 + '0';
	} while ((positive /= 10) > 0);

	if (is_negative)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

void itoa_fixed2(int n, char s[]) {
	int i, is_negative;
  //long n;
	is_negative = (n < 0);
	i = 0;
	if (is_negative) {
	  do {
      //printf("%c\n", -(n % 10) + '0');
	  	s[i++] = -(n % 10) + '0';
	  } while ((n /= 10) < 0);
  } else {
	  do {
      //printf("%c\n", n % 10 + '0');
	  	s[i++] = n % 10 + '0';
	  } while ((n /= 10) > 0);
  }

	if (is_negative)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

