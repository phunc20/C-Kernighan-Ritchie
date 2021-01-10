#include <stdio.h>
//#include <stdlib.h>

int main(int argc, char **argv) {
  int a = 10;
  int *ip = &a;
  printf(
  "int a = 10;"
  "\n"
  "int ip = &a = %p"
  "\n", ip
      );
  //printf("++a-- = %d\n", ++a--);
  printf("(*ip)-- = %d(%%d)\n", (*ip)--);
  //printf("(*ip)-- = %p(%%p)\n", (*ip)--);
  printf("*ip-- = %d(%%d)\n", *ip--);
  //printf("*ip-- = %p(%%p)\n", *ip--);
  printf("(*ip)-- = %d(%%d)\n", (*ip)--);
  //printf("(*ip)-- = %p(%%p)\n", (*ip)--);
  return 0;
}
