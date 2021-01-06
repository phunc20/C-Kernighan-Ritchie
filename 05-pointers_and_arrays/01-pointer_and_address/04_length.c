#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, char **argv) {
  int a1[] = {1,2,3};
  int a2[3] = {1,2,3};
  int a3[3];
  //int a4[];         // error: array size missing in ‘a4’
  int *pa1;
  int *pa2 = &a2[0];
  //int a4[] = *pa2;  // error: invalid initializer 

  printf("int a1[] = {1,2,3};"  "\n"
         "int a2[3] = {1,2,3};" "\n"
         "int a3[3];"           "\n"
         "int *pa1;"            "\n"
         "int *pa2 = &a2[0];"   "\n"
         );
  printf("\n");

  printf("sizeof(a1)/sizeof(int) = %d\n", sizeof(a1)/sizeof(int));
  printf("sizeof(a2)/sizeof(int) = %d\n", sizeof(a2)/sizeof(int));
  printf("sizeof(a3)/sizeof(int) = %d\n", sizeof(a3)/sizeof(int));
  //printf("sizeof(a4)/sizeof(int) = %d\n", sizeof(a4)/sizeof(int));
  printf("sizeof(pa1)/sizeof(int) = %d\n", sizeof(pa1)/sizeof(int));
  printf("sizeof(pa2)/sizeof(int) = %d\n", sizeof(pa2)/sizeof(int));
  printf("sizeof(*pa1)/sizeof(int) = %d\n", sizeof(*pa1)/sizeof(int));
  printf("sizeof(*pa2)/sizeof(int) = %d\n", sizeof(*pa2)/sizeof(int));


  return 0;
}
