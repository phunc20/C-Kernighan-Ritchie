#include <time.h>
#include <stdlib.h>

int my_binsearch(int x, int v[], int n) {
  /* v, array of increasing integers
   * x, an int
   * n, the length of v
   *
   * Goal: return the index of x in v if exists, return -1 otherwise.
   */
  /* Brute-force search */
  //for (int i=0; i<n; ++i) {
  //  if (v[i] == x)
  //    return i;
  //}
  //return -1;

  int left = 0;
  int right = n-1;
  int mid = (left+right) / 2;
  while (left != right) {
    if (v[mid] == x)
      return mid;
    else if (v[mid] > x)
      right = mid;
    else
      left = mid;

    mid = (left+right) / 2;
  }
  return -1;
}

/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */
int binsearch(int x, int v[], int n) {
  int low, high, mid;

  low = 0;
  high = n-1;
  /* Note how the authors made high and low
   * strictly decreasing and strictly increasing,
   * respectively.
   *
   * This guarantees that (low <= high) must
   * eventually be violated if no match is found.
   *
   * For instance, if we enter the while loop with
   * low == high, then upon exiting the loop, we'd
   * have
   * ( low = mid + 1 and high = mid ) or
   * ( low = mid and high = mid - 1 )
   * Either way, we have low > high.
   */
  while (low <= high) {
    mid = (low+high) / 2;
    if (x < v[mid])
      high = mid - 1;
    else if (x > v[mid])
      low = mid + 1;
    else  /* found match */
      return mid;
  }
  return -1; /* no match */
}

/* Wrong implementation */
int exo_binsearch(int x, int v[], int n) {
  int low, high, mid;

  low = 0;
  high = n-1;
  while (low <= high) {
    mid = (low+high) / 2;
    if (x < v[mid])
      high = mid - 1;
    else
      low = mid;
  }
  if (x == v[mid])
    return mid;
  else
    return -1;
}

int exo_binsearch2(int x, int v[], int n) {
  int low, high, mid;

  low = 0;
  high = n-1;
  mid = (low+high) / 2;
  while (mid > low) {
    if (x < v[mid])
      high = mid - 1;
    else
      low = mid;
    mid = (low+high) / 2;
  }
  /* When will we exit the loop?
   * Ans: When mid <= low. Since, before entering the next iteration, mid = (low+high) / 2,
   * this (i.e. mid <= low, or more precisely, mid == low) happens when high = low + 1.
   * For instance, when high is of a greater value, say, high = low + 2, then mid = low + 1 > low.
   */
  if (x == v[high])
    return high;
  else if (x == v[low])
    return low;
  else
    return -1;
}

int *randint(int len) {
}





