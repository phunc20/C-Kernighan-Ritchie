#include <stdio.h>
#include <stdlib.h>
#include <time.h>    // for clock_t, clock() and CLOCKS_PER_SEC
#include <unistd.h>  // for sleep()
#include "../utils.h"

int main(int argc, char **argv) {
  //int len = (1 << 31) - 1;  // coredump
  //int len = 1 << 30;        // coredump
  //int len = 99999;          // Takes about 13s on Thinkpad X200
  //int len = 9999999;        // coredump
  //int len = 999999;         // Takes eternity on Thinkpad X200
  int len = 199999;         // Takes about 1m on Thinkpad X200
  int A[len];

  double cpu_time_used;
  clock_t begin, end;
  begin = clock();
  //printf("Sorting A ...\n");
  //randint_isort(A, len);
  //end = clock();
  //cpu_time_used = (double) (end - begin) / CLOCKS_PER_SEC;
  //printf("Finish sorting. Took %f (sec)\n\n", cpu_time_used);
  /* We don't necessarily need the sorted numbers to be random in order
   * to test binsearch functions efficiency.
   */
  for (int k=0; k<len; ++k)
    A[k] = k;
  //printf("A = {");
  //for (int i=0; i<len; ++i) {
  //  printf("%d%s", A[i], (i == len-1) ? "}\n" : ", ");
  //}


  int index;
  //index = len - 1;
  srand(time(NULL));
  index = rand() % len;
  int x = A[index];
  printf("len = %d\n", len);
  printf("x = A[%d]\n", index);
  printf("\n");

  begin = clock();
  printf("exo_binsearch2(x, A, len) = %d\n", exo_binsearch2(x, A, len));
  end = clock();
  cpu_time_used = (double) (end - begin) / CLOCKS_PER_SEC;
  printf("cpu_time_used = %f (sec)\n\n", cpu_time_used);

  begin = clock();
  printf("binsearch(x, A, len) = %d\n", binsearch(x, A, len));
  end = clock();
  cpu_time_used = (double) (end - begin) / CLOCKS_PER_SEC;
  printf("cpu_time_used = %f (sec)\n\n", cpu_time_used);

  begin = clock();
  printf("stackexchange_binsearch(x, A, len) = %d\n", stackexchange_binsearch(x, A, len));
  end = clock();
  cpu_time_used = (double) (end - begin) / CLOCKS_PER_SEC;
  printf("cpu_time_used = %f (sec)\n\n", cpu_time_used);

  return 0;
}
