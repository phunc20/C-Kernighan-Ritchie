#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Note how a label should start at the begin of line. */
void common(int a[], int b[], int n, int m) {
	int i,j;
	for (i=0; i<n; i++)
	  for (j=0; j<m; j++)
			if (a[i] == b[j])
				goto found;
  printf("No common element btw a[] and b[].\n");
	return;
found:
	/* got one: a[i] == b[j] */
  printf("a[%d] = %d equals b[%d] = %d.\n", i, a[i], j, b[j]);
}

int main(int argc, char **argv) {
	int a[] = {1,2,3,4,5};
	int b[] = {-1,-2,-3,-4,-5};
	int c[] = {1,-2,3,-4,5};
	printf(
	"int a[] = {1,2,3,4,5};"       "\n"
	"int b[] = {-1,-2,-3,-4,-5};"  "\n"
	"int c[] = {1,-2,3,-4,5};"     "\n"
			);
	printf("\n");

	printf("common(a, b, 5, 5);\n");
	common(a, b, 5, 5);
	printf("\n");

	printf("common(b, c, 5, 5);\n");
	common(b, c, 5, 5);
  return 0;
}
