#include <stdio.h>
#include <time.h>    // for clock_t, clock() and CLOCKS_PER_SEC
#include <unistd.h>  // for sleep()


int main() {
  double cpu_time_used;
  clock_t begin, end;
  begin = clock();

  // or replace sleep() with some heavy work that takes time.
  sleep(3);

  end = clock();
  cpu_time_used = (double) (end - begin) / CLOCKS_PER_SEC;
  //cpu_time_used = ((double)(end - begin)) / (double)CLOCKS_PER_SEC;
  /* Note that type conversion's precedence is higher than division (i.e. /) */
  printf("cpu_time_used = %f (sec)\n", cpu_time_used);
  printf("\n");
  printf("begin = %f(%%f)\n", begin);
  printf("begin = %d(%%d)\n", begin);
  printf("\n");
  printf("end = %f\n", end);
  printf("end = %d(%%d)\n", end);
  printf("\n");
  printf("CLOCKS_PER_SEC = %f(%%f)\n", CLOCKS_PER_SEC);
  printf("CLOCKS_PER_SEC = %d(%%d)\n", CLOCKS_PER_SEC);

  return 0;
}
