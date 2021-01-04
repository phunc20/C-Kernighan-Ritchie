#include <stdio.h>
#include <time.h>    // for clock_t, time() and CLOCKS_PER_SEC
#include <unistd.h>  // for sleep()


int main() {
  double elapsed;
  clock_t begin, end;
  begin = time(NULL);

  // or replace sleep() with some heavy work that takes time.
  sleep(3);

  end = time(NULL);
  //elapsed = end - begin;
  /* Note that type conversion's precedence is higher than division (i.e. /) */
  printf("Time elapsed (%%f) = %f (sec)\n", end - begin);
  printf("Time elapsed (%%d) = %d (sec)\n", end - begin);
  return 0;
}
