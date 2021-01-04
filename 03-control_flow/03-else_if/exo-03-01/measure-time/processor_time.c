#include <stdio.h>
//#include <time.h>     // for clock_t, clock() and CLOCKS_PER_SEC
#include <sys/times.h>  // for struct tms, and times()
#include <unistd.h>     // for sleep()


int main() {
  double elapsed;
  clock_t begin, end;
  begin = clock();

  // or replace sleep() with some heavy work that takes time.
  sleep(3);

  end = clock();
  elapsed = (double) (end - begin) / CLOCKS_PER_SEC;
  //elapsed = ((double)(end - begin)) / (double)CLOCKS_PER_SEC;
  /* Note that type conversion's precedence is higher than division (i.e. /) */
  printf("CPU time consumed = %f (sec)\n\n", elapsed);
  printf("begin = %f(%%f)\n", begin);
  printf("begin = %d(%%d)\n", begin);
  printf("end = %f\n", end);
  printf("end = %d(%%d)\n", end);
  printf("CLOCKS_PER_SEC = %f(%%f)\n", CLOCKS_PER_SEC);
  printf("CLOCKS_PER_SEC = %d(%%d)\n", CLOCKS_PER_SEC);

  return 0;
}
