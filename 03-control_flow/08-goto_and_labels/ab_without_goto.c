#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Note how we cannot use a single break to resolve this */
void common(int a[], int b[], int n, int m) {
	int i, j, found;
	found = 0;
	for (i=0; i<n && !found; i++)
	  for (j=0; j<m && !found; j++)
			if (a[i] == b[j])
				found = 1;
  if (found)
    printf("a[%d] = %d equals b[%d] = %d.\n", i, a[i], j, b[j]);
	else
    printf("No common element btw a[] and b[].\n");
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
