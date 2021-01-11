#include <ctype.h>

/* atof: convert string s to double
 * Note. In cases like "37,543", atof shall
 * output 37 since ',' is neither '.' nor a digit.
 */
double atof(char s[]) {
	double val, power;
  int i, sign;
	for (i=0; isspace(s[i]); i++) /* skip white space(s) */
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (val=0.0; isdigit(s[i]); i++)
		val = 10.0 * val + (s[i] - '0');
	if (s[i] == '.')
		i++;
	for (power=1.0; isdigit(s[i]); i++) {
		val = 10.0 * val + (s[i] - '0');
		power *= 10.0;
	}
	return sign * val / power;
}

double another_atof(char s[]) {
	double big, small, digit;
  int i, j, sign;
	for (i=0; isspace(s[i]); i++) /* skip white space(s) */
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	for (big=0.0; isdigit(s[i]); i++)
		big = 10.0 * big + (s[i] - '0');
	if (s[i] == '.')
		i++;
	for (small=0.0, j=1; isdigit(s[i]); i++, j++) {
		digit = s[i] - '0';
		for (int k=0; k<j; k++)
			digit *= 0.1;
		small += digit;
	}
	return sign*(big + small);
}

/* atoi: convert string s to integer using atof */
int atoi(char s[]) {
  double atof(char s[]);
  return (int) atof(s);
}
