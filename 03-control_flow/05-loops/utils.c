#include <ctype.h>
#include <string.h> // strlen()

/* atoi: convert s to integer; version 2 */
int atoi(char s[]) {
	int i, n, sign;

	for (i=0; isspace(s[i]); i++) /* skip leading white spaces */
		;
	sign = (s[i] == '-') ? -1 : 1;
	if (s[i] == '-' || s[i] == '+') /* skip sign (if there is one) */
		i++;
	for (n=0; isdigit(s[i]); i++)
		n = 10*n + (s[i] - '0');
	return sign*n;
}

/* shellsort: sort v[0], ..., v[n-1] into increasing order */
void shellsort(int v[], int n) {
	int gap, i, j, temp;

	for (gap = n/2; gap > 0; gap /=2)
		for (i=gap; i<n; i++)
			for (j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap) {
				temp = v[j];
				v[j] = v[j+gap];
				v[j+gap] = temp;
			}
}

/* reverse: reverse string s in place */
void reverse(char s[]) {
	int c,i,j;

	for (i=0, j=strlen(s)-1; i<j; i++, j--) {
		c = s[i], s[i] = s[j], s[j] = c;
	}
}

void expand(char s1[], char s2[]) {
	int i,j; // i, j indices of s1, s2, resp.
	char left, right; // characters left and right to hyphen
	int k;
	char c;
	//for (i=0, j=0; s1[i]!='\0'; i++) {
	for (i=0, j=0; s1[i]!='\0';) {
		if (s1[i] == '-') {
			if (i <= 0 || !isalnum(s1[i-1]))
			  s2[j++] = s1[i++];
			else {
				left = s1[i-1];
				right = s1[i+1];
				//if (isdigit(left) && isdigit(right)) {
				if ((isdigit(left) && isdigit(right)) || (islower(left) && islower(right)) || (isupper(left) && isupper(right))) {
					for (c=left+1; c<=right; c++)
						s2[j++] = c;
					i += 2;
				}
				//else if (islower(left) && islower(right)) {
				//	for (c=left+1; c<=right; c++)
				//		s2[j++] = c;
				//}
				//else if (isupper(left) && isupper(right)) {
				//	for (c=left+1; c<=right; c++)
				//		s2[j++] = c;
				//}
				else {
			    s2[j++] = s1[i++];
			    s2[j++] = s1[i++];
				}
			}
		}
		else {
			s2[j++] = s1[i++];
		}
	}
	s2[j] = '\0';
}
