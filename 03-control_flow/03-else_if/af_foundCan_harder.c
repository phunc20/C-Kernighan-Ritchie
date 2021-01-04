#include <stdio.h>
#include "utils.h"

int main(int argc, char **argv) {
  int v[] = {-1072215622, -1068158081, -1064196160, -1060202914, -1046172080, -1041823915, -1011449902, -995848946, -987742630, -954675693, -899605652, -847969405, -843921689, -839234433, -834545438, -812458693, -809190641, -790622269, -744296936, -734271058, -731030105, -730417437, -715337317, -671959919, -658637404, -603704828, -549426573, -476179630, -474775624, -473726424, -467089429, -443115411, -432810933, -399545157, -393963863, -381058486, -369798422, -320883347, -301754700, -296206195, -275561594, -171543239, -170622020, -156846091, -144542009, -132652848, -122996441, -92113534, -32733216, -29440892, 10371237, 15704363, 34754484, 54430728, 85922036, 93644329, 130057494, 138229415, 145231884, 164113143, 166813979, 198685469, 215874541, 234881010, 249182249, 252609577, 258497873, 265796772, 270618126, 274346450, 277842797, 291474470, 320744389, 346125937, 370636331, 379578135, 413001481, 423107861, 424416518, 462386726, 508317676, 604060304, 648543389, 650828721, 659413327, 727301448, 779252386, 786360264, 789333678, 851862030, 855571486, 875910979, 925739009, 953035406, 991332719, 1029360919, 1046320335, 1053424101, 1056267899, 1069746654};
  int n = sizeof(v) / sizeof(int);
  int x = v[n-1];
  printf("v = [");
  for (int i=0; i<n; ++i)
    printf("%d%s", v[i], (i == n-1) ? "]\n" : ", ");
  printf("n = %d\n", n);
  printf("x = %d\n", x);
  printf("binsearch(x, v, n) = %d\n", binsearch(x, v, n));
  return 0;
}
